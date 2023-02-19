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
int SearchFirstOccurance(PNODE First, int No)
{
    int Counter = 1;
    int ipos = -1; 
    while(First != NULL)
    {
        if(First->data == No)
        {
            ipos = Counter;
            break;
        }
        First = First->next;
        Counter++;

    }
    return ipos;

}
int SearchLastOccurance(PNODE First, int No)
{
    int Counter = 1;
    int ipos = -1; 
    while(First != NULL)
    {
        if(First->data == No)
        {
            ipos = Counter;
            
        }
        First = First->next;
        Counter++;

    }
    return ipos;

}
int FindMiddleElement(PNODE First)
{
    PNODE Student = First;
    PNODE Teacher = First;
    while(Teacher->next != NULL)     // ((Teacher->next != NULL) ani ha only odd linked list sathi use)    ( //(Teacher != NULL )  ani ha loof fkat even sathi)
    {
        Teacher = Teacher->next->next;
        Student = Student->next;
    }
    return(Student->data);
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 51);// InsertFirst(60,51)
    InsertFirst(&Head, 121);// InsertFirst(60,51)
    InsertFirst(&Head, 111);// InsertFirst(60,51)
    InsertFirst(&Head, 101);// InsertFirst(60,51)
    InsertFirst(&Head, 51);// InsertFirst(60,51)
    InsertFirst(&Head, 21);// InsertFirst(60,21)
    InsertFirst(&Head, 11);// InsertFirst(60,11)
    
    Display(Head);

    iRet = SearchFirstOccurance(Head,51);
    if(iRet == -1)
    {
        printf("There is no such Element in LL\n");
    }
    else
    {
        printf("Element First Occurance is there in Linked list : %d\n",iRet);
    }

     
     iRet = SearchLastOccurance(Head,51);
    if(iRet == -1)
    {
        printf("There is no such Element in LL\n");
    }
    else
    {
        printf("Element Last Occurance is there in Linked list : %d\n",iRet);
    }

    iRet = FindMiddleElement(Head);
    printf("Miidle Element in linked list is : %d\n",iRet);


    return 0;
}
