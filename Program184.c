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
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn;
        *First = newn;
        
    }
    (*First)->prev = *Last;
    (*Last)->next = *First;

}



void InsertLast(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        (*Last)->next = newn;
        newn->prev = *Last;
        *Last = newn;
        
        
    }
    (*First)->prev = *Last;
    (*Last)->next = *First;

}
void Display(PNODE First, PNODE Last)
{
    if((First == NULL) && (Last == NULL))
    {
        printf("Linked List Empty : \n");
        return;
    }
    
    printf(" Elements of Doubly Linked List Are : \n");
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
    if((First == NULL) && (Last == NULL))
    {
       
        return iCnt;
    }
    
    do
    {
         iCnt++;
        First = First->next;
     }while(First != Last->next);

     return iCnt;

    

}
void DeleteFirst(PPNODE First, PPNODE Last)
{
    if((*First == NULL) && (*Last == NULL))
    {
        printf("Linked List Empty \n");
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
        *First = (*First)->next;
        free((*Last)->next);
        (*First)->prev = *Last;
    (*Last)->next = *First;

    }
}

void DeleteLast(PPNODE First, PPNODE Last)
{
    if((*First == NULL) && (*Last == NULL))
    {
        printf("Linked List Empty \n");
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
        *Last = (*Last)->prev;
        free((*First)->prev);

        (*First)->prev = *Last;
    (*Last)->next = *First;

    }
}

void InsertAtPosition(PPNODE First, PPNODE Last, int no, int ipos)
{
    int NodeCnt = 0;
    int iCnt = 0;
    PNODE temp = NULL;
    PNODE newn = NULL;

    NodeCnt = Count(*First, *Last);
    
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

        temp = *First;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;

        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;




    }



}


void DeleteAtPosition(PPNODE First, PPNODE Last, int ipos)
{
    int NodeCnt = 0;
    int iCnt = 0;
    PNODE temp = NULL;
    

    NodeCnt = Count(*First, *Last);
    
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
        

        temp = *First;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;

        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
       




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
    printf("Count of Doubly Linked List Are : %d\n",iRet);



    InsertLast(&Head,&Tail,101);
    InsertLast(&Head,&Tail,111);
    InsertLast(&Head,&Tail,121);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Count of Doubly Linked List Are : %d\n",iRet);

    InsertAtPosition(&Head,&Tail,105,5);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Count of Doubly Linked List Are : %d\n",iRet);


    DeleteAtPosition(&Head,&Tail,5);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Count of Doubly Linked List Are : %d\n",iRet);




    DeleteFirst(&Head,&Tail);
     Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Count of Doubly Linked List Are : %d\n",iRet);


    DeleteLast(&Head,&Tail);
     Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Count of Doubly Linked List Are : %d\n",iRet);

    
    return 0;
}