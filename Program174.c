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

void InsertFirst(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
       *First = *Last = newn;
       (*Last)->next = *First;
    }
    else
    {
        newn->next = *First;
        *First = newn;
        (*Last)->next = *First;
        

        
    }

}

void InsertLast(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))
    {

       *First = *Last = newn;
       (*Last)->next = *First;

    }
    else
    {
        (*Last)->next = newn;
        *Last = newn;
        (*Last)->next = *First;
        

        
    }

}
void DeleteFirst(PPNODE First, PPNODE Last)
{
  if((*First == NULL) && (*Last == NULL))
  {
    return;

  }
  else if((*First) == (*Last))
  {
    free(*First);
    *First = NULL;
    (*Last)->next = *First;
  }
  else
  {
    PNODE temp = *First;
    *First = (*First)->next;
    (*Last)->next = *First;
    free(temp);


  }
}

void DeleteLast(PPNODE First, PPNODE Last)
{
  if((*First == NULL) && (*Last == NULL))
  {
    return;

  }
  else if((*First) == (*Last))
  {
    free(*First);
    *First = NULL;
    (*Last)->next = *First;
  }
  else
  {
    PNODE temp = *First;
    do
    {
     temp = temp->next;
    }while(temp->next->next != ((*Last)->next));
    
    
    *Last = temp;
     free(temp->next);
    (*Last)->next = *First;
   







  }
}

void Display(PNODE First , PNODE Last)
{
    printf("Elements of Linked list are : \n");
    do
    {
      printf("| %d |->",First->data);
      First = First->next;
    }while(First != Last->next);
    printf("\n");
}

int Count(PNODE First , PNODE Last)
{
    int iCnt = 0;
   
    do
    {
      iCnt++;
      First = First->next;
    }while(First != Last->next);

    return iCnt;
}
void InsertAtPosition(PPNODE First, PPNODE Last, int no, int ipos)
{
  PNODE temp = NULL;
  int NodeCnt = 0;

  NodeCnt = Count(*First,*Last);

  if((ipos < 1) || (ipos > NodeCnt+1))
  {
    printf("Invalid Statements : \n ");
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
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    temp = *First;
  for(int iCnt = 1; iCnt < ipos-1; iCnt++)
  {
    temp = temp->next;
  }
  newn->next = temp->next;
  temp->next = newn;
  (*Last)->next = *First;
}
}


void DeleteAtPosition(PPNODE First, PPNODE Last,int ipos)
{
  PNODE temp1 = NULL;
  PNODE temp2 = NULL;
  int NodeCnt = 0;

  NodeCnt = Count(*First,*Last);

  if((ipos < 1) || (ipos > NodeCnt+1))
  {
    printf("Invalid Statements : \n ");
    return;

  }
  if(ipos == 1)
  {
    DeleteFirst(First,Last);
  }
  else if(ipos == NodeCnt+1)
  {
    DeleteLast(First,Last);
  }
  else
  {
   
    temp1 = *First;
  for(int iCnt = 1; iCnt < ipos-1; iCnt++)
  {
    temp1 = temp1->next;
  }
  temp2 = temp1->next;
  temp1->next = temp2->next;
  free(temp2);
  (*Last)->next = *First;
  
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


    InsertLast(&Head, &Tail,101);
    InsertLast(&Head, &Tail,111);
    InsertLast(&Head, &Tail,121);

    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Count of Linked List Are : %d\n",iRet);

    InsertAtPosition(&Head, &Tail,105,5);
     Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Count of Linked List Are : %d\n",iRet);

    DeleteAtPosition(&Head, &Tail,5);
     Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Count of Linked List Are : %d\n",iRet);



    DeleteFirst(&Head,&Tail);
     Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Count of Linked List Are : %d\n",iRet);

    DeleteLast(&Head,&Tail);
     Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Count of Linked List Are : %d\n",iRet);

  


return 0;
}


