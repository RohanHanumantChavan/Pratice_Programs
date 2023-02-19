#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));      

    newn->data = no;
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

void Display(PNODE First)
{
    printf("Elements from the Linked List are : \n");

    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }
    printf("NULL \n");
}
bool LoopCheck(PNODE First)
{
    PNODE Student = First;
    PNODE Teacher = First;
    bool bFlag = false;
    while((Teacher != NULL) && (Teacher->next != NULL))
    {
        Student = Student->next;
        Teacher = Teacher->next->next;

        if(Student == Teacher)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;


}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    bool bRet = false;

    InsertFirst(&Head, 121);
    InsertFirst(&Head, 111);
    InsertFirst(&Head, 101);
    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);
    
    Display(Head);

    PNODE temp1, temp2;
    temp1 = Head;
    temp2 = Head;

    temp1 = temp1->next->next;
    temp2 = temp2->next->next->next->next->next;

    temp2->next = temp1;   //Problem loof created
    
    bRet = LoopCheck(Head);
    if(bRet == true)
    {
        printf("There is Loop\n");
    }
    else
    {
        printf("There is no Loop\n");
    }


    
    return 0;
}
