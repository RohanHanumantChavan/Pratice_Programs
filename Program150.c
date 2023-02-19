#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
         newn->next = *First;
        *First = newn;
    }
}
void InsertLast(PPNODE First, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *First;
    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
         
    }
}
void Display(PNODE First)
{
    printf("Elements of Linked List Are : \n");
    while(First != NULL)
    {
        printf("| %d |->",First->data);
       First =  First->next;
    }
    printf("NULL\n");
}
int Count(PNODE First)
{
    int iCnt = 0;
    
    while(First != NULL)
    {
        iCnt++;
       First =  First->next;
    }
    return iCnt;
}
void DeleteFirst(PPNODE First)
{
    PNODE temp = *First;
    if(*First == NULL)
    {
        return;
    }
    else if((*First)->next == NULL)
    {
        free(*First);
        *First = NULL;

    }
    else
    {
        
        (*First) = (*First) ->next;
        free(temp);

    }
}
void DeleteLast(PPNODE First)
{
    PNODE temp = *First;
    if(*First == NULL)
    {
        return;
    }
    else if((*First)->next == NULL)
    {
        free(*First);
        *First = NULL;

    }
    else
    {
        while(temp ->next ->next != NULL)
        {
           temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
       

    }
}
void InsertAtPos(PPNODE First,int No, int ipos)
{
    int NodeCnt = 0;
    PNODE temp = NULL;
    PNODE newn = NULL;
    int iCnt = 0;

    NodeCnt = Count(*First);

    if((ipos < 1) || (ipos > (NodeCnt+1)))
    {
        return;
        printf("Invalid Statments :\n");
    }
    if(ipos == 1)
    {
        InsertFirst(First,No);
    }
    else if(ipos == NodeCnt+1)
    {
        InsertLast(First,No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;

        temp = *First;
        for(iCnt = 1; iCnt < ipos-1;iCnt++)
        {
            temp = temp->next;
        }
       newn->next = temp->next;
       temp->next = newn;
    }
    

}
void DeleteAtPos(PPNODE First, int ipos)
{
    int NodeCnt = 0;
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;
    PNODE newn = NULL;
    int iCnt = 0;

    NodeCnt = Count(*First);

    if((ipos < 1) || (ipos > (NodeCnt+1)))
    {
        return;
        printf("Invalid Statments :\n");
    }
    if(ipos == 1)
    {
        DeleteFirst(First);
    }
    else if(ipos == NodeCnt+1)
    {
        DeleteLast(First);
    }
    else
    {
         temp1 = *First;
         for(iCnt = 1; iCnt < ipos-1; iCnt++)
         {
            temp1 = temp1->next;
         }
         temp2 = temp1->next;
         temp1->next = temp1->next->next;
         free(temp2);

    }
    

}
int main ()
{
    PNODE Head = NULL;
    int iRet = 0;
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);
    iRet = Count(Head);
    printf("Elements of Linked list Count is : %d\n",iRet);

    InsertLast(&Head,101);
    InsertLast(&Head,111);
    InsertLast(&Head,121);
     Display(Head);
    iRet = Count(Head);
    printf("Elements of Linked list Count is : %d\n",iRet);

    DeleteFirst(&Head);
    Display(Head);
    iRet = Count(Head);
    printf("Elements of Linked list Count is : %d\n",iRet);

    DeleteLast(&Head);
    Display(Head);
    iRet = Count(Head);
    printf("Elements of Linked list Count is : %d\n",iRet);

    InsertAtPos(&Head,105,4);
    Display(Head);
    iRet = Count(Head);
    printf("Elements of Linked list Count is : %d\n",iRet);

    DeleteAtPos(&Head,4);
    Display(Head);
    iRet = Count(Head);
    printf("Elements of Linked list Count is : %d\n",iRet);
    
    

    

    

    return 0;
}