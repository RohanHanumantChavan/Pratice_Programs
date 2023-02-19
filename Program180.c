#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    struct node *prev;

};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = *Last = newn;
        (*Last)->next = *First;
        (*First)->prev = *Last;
    }
    else
    {
        newn->next = *First;
        *First = newn;
        (*Last)->next = *First;
        (*First)->prev = *Last;
    }
}
void InsertLast(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = *Last = newn;
        (*Last)->next = *First;
        (*First)->prev = *Last;
    }
    else
    {
        (*Last)->next = newn;
        newn->prev = *Last;
         *Last = newn;
        (*Last)->next = *First;
        (*First)->prev = *Last;


    }
}
void Display(PNODE First, PNODE Last)
{
    printf("Elements of Doubly Circular Linked List Are : \n");
     printf("<==>");
    do 
    {
        printf("| %d |<==>",First->data);
        First = First->next;

    }while(First != Last->next);
    printf("\n");
}


int Count(PNODE First, PNODE Last)
{
   int iCnt = 0;
     
    do 
    {
        iCnt++;
        First = First->next;

    }while(First != Last->next);
   return iCnt;
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    PNODE temp = NULL;
    if((*First == NULL) && (*Last == NULL))
    {
        printf("Linked List is Empty : \n");
        return;
    }

     else if(*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        temp = *First;
        *First = (*First)->next;
        free(temp);
        (*First)->prev = *Last;
        (*Last)->next = *First;
        



    }
}

void DeleteLast(PPNODE First, PPNODE Last)
{
    PNODE temp = *First;
    if((*First == NULL) && (*Last == NULL))
    {
        printf("Linked List is Empty : \n");
        return;
    }
    else if(*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        while(temp->next != (*Last))
        {
            temp = temp->next;
        }
        free(temp->next);
        *Last = temp;
        (*First)->prev = *Last;
        (*Last)->next = *First;
        

        
    }
}
void InsertAtPosition(PPNODE First, PPNODE Last, int no, int ipos)
{
    int NodeCnt = 0;
    PNODE temp = *First;
    PNODE newn = NULL;
    int iCnt = 0;

    NodeCnt = Count(*First,*Last);

    if((ipos < 1) || (ipos > NodeCnt+1))
    {
        printf("Invalid Position \n");
        return;
    }
    if(ipos == 1)
    {
        InsertFirst(First,Last,no);
    }
    else if(ipos == NodeCnt+1)
    {
        InsertLast(First,Last,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        newn->prev = temp;
        temp->next = newn;
        temp->next->prev = newn;

    
        

    }

    
}


void DeleteAtPosition(PPNODE First, PPNODE Last, int ipos)
{
    int NodeCnt = 0;
    int iCnt = 0;
    PNODE temp1 = *First;
    PNODE temp2 = NULL;
    

    NodeCnt = Count(*First,*Last);

    if((ipos < 1) || (ipos > NodeCnt))
    {
        printf("Invalid Position \n");
        return;
    }
    if(ipos == 1)
    {
        DeleteFirst(First,Last);
    }
    else if(ipos == NodeCnt)
    {
        DeleteLast(First,Last);
    }
    else
    {
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        temp2->next->prev = temp1;
        free(temp2);
        
    }

    
}
int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;

    InsertFirst(&Head, &Tail,51);
    InsertFirst(&Head, &Tail,21);
    InsertFirst(&Head, &Tail,11);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("elements Count of Doubly Circular Are : %d\n",iRet);

    InsertLast(&Head, &Tail,101);
    InsertLast(&Head, &Tail,111);
    InsertLast(&Head, &Tail,121);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("elements Count of Doubly Circular Are : %d\n",iRet);

    InsertAtPosition(&Head, &Tail,105,5);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("elements Count of Doubly Circular Are : %d\n",iRet);

    DeleteAtPosition(&Head, &Tail,5);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("elements Count of Doubly Circular Are : %d\n",iRet);








    DeleteFirst(&Head, &Tail);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("elements Count of Doubly Circular Are : %d\n",iRet);


    DeleteLast(&Head, &Tail);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("elements Count of Doubly Circular Are : %d\n",iRet);






    return 0;
}