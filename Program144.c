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
typedef struct node **PPNODE;
void InsertFirst(PPNODE First,int No)
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
      newn->next  = *First;
      *First = newn;
    }

} 
void Display(PNODE First)
{
    printf("Elements Of Linked are : \n");
    while(First != NULL)
    {
        printf("%d\t",First->data);
        First = First->next;
    }
    printf("\n");

}
int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;

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

    printf("Number of Elements Are : %d\n",iRet);

    InsertFirst(&Head,101);
    InsertFirst(&Head,111);

    Display(Head);
    iRet = Count(Head);

    printf("Number of Elements Are : %d\n",iRet);


    
    return 0;
}