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
        newn-> next = *First;
        *First = newn;

    }
}
void InsertLast(PPNODE First, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE Temp = *First;

    newn-> data = No;
    newn ->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        while(Temp->next != NULL)
        {
           Temp = Temp-> next;
        }
        Temp-> next = newn;
        
    }
}
void Display(PNODE First)
{
    printf("Elements of Linked List Are : \n");
    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
       First = First -> next;
    }
    printf("NULL \n");
}
int Count(PNODE First)
{
    int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First = First -> next;

    }
    return iCnt;
}
void DeleteFirst(PPNODE First)
{
    PNODE Temp = *First;
    if(*First == NULL)
    {
        return;
    }
    else if((*First) ->next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        (*First) = (*First)-> next;
        free(Temp);

    }
}
void DeleteLast(PPNODE First)
{
    PNODE Temp = *First;
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
        while(Temp ->next ->next != NULL)
        {
            Temp = Temp ->next;
        }
        free(Temp->next);
        Temp-> next = NULL;
        
    }
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);


    Display(Head);
    iRet = Count(Head);
    printf("Elements of Linked List Are : %d\n",iRet);


    InsertLast(&Head,101);
    InsertLast(&Head,111);

     Display(Head);
    iRet = Count(Head);
    printf("Elements of Linked List Are : %d\n",iRet);


    DeleteFirst(&Head);
    Display(Head);
    iRet = Count(Head);
    printf("Elements of Linked List Are : %d\n",iRet);

    DeleteLast(&Head);
    Display(Head);
    iRet = Count(Head);
    printf("Elements of Linked List Are : %d\n",iRet);


    return 0;
}