#include<iostream>
using namespace std;

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

class DoublyCLL
{
    public:
    PNODE First;
    PNODE Last;

    DoublyCLL();

    void InsertFirst(int no);
    void InsertLast(int no);
    void InsertAtPosition(int no, int ipos);


    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPosition(int ipos);

    void Display();
    int Count();

};

DoublyCLL::DoublyCLL()
{
    First = NULL;
    Last = NULL;
}

void DoublyCLL:: InsertFirst(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
        

    }
    else
    {
        newn->next = First;
        (First)->prev = newn;
        First = newn;

    }
    (First)->prev = Last;
    (Last)->next = First;
    
    

}

void DoublyCLL::InsertLast(int no)
{
     PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
        

    }
    else
    {
        (Last)->next = newn;
        newn->prev = Last;
        Last = newn;


    }
    (First)->prev = Last;
    (Last)->next = First;
    

    
}
void DoublyCLL:: Display()
{
    PNODE temp = First;
    if(First == NULL &&  Last == NULL)
    {
        cout<<"Linked list is empty "<<"\n";
        return;
    }
    cout<<"Elements of Doubly Circlar Are : "<<"\n";
    cout<<"<==>";
    do
    {
        cout<<"|"<<temp->data<<"<==>";
        temp = temp->next;
    }while(temp != Last->next);
    cout<<"\n";
}

int DoublyCLL::Count()
{
    PNODE temp = First;
    int iCnt = 0;
    if(First == NULL &&  Last == NULL)
    {
        
        return iCnt;
    }
    
    do
    {
        iCnt++;
        temp = temp->next;
    }while(temp != Last->next);

    return iCnt;
}
void DoublyCLL::DeleteFirst()
{
    if((First == NULL) && (Last == NULL))
    {
        cout<<"Linked List is Empty : "<<"\n";
     return;
    }
    else if(First == Last)
    {
        delete(First);
        First = NULL;
        Last = NULL;


    }
    else
    {
        First = (First)->next;
        delete((Last)->next);   //free((First)->prev);

        (First)->prev = Last;
        (Last)->next = First;   

      
    }
      
}

void DoublyCLL::DeleteLast()
{
    if((First == NULL) && (Last == NULL))
    {
        cout<<"Linked List is Empty : "<<"\n";
     return;
    }
    else if(First == Last)
    {
        delete(First);
        First = NULL;
        Last = NULL;


    }
    else
    {
        Last = (Last)->prev;
        delete((First)->prev);     //free((Last)->next);

        (First)->prev = Last;
        (Last)->next = First;   

    }
}
void DoublyCLL::InsertAtPosition( int no, int ipos)
{
    int NodeCnt = 0;
    int iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    NodeCnt = Count();

    if((ipos < 1) || (ipos > NodeCnt+1))
    {
        cout<<"Invalid Position : "<<"\n";
        return;

    }
    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == NodeCnt+1)
    {
        InsertLast(no);
    }
    else
    {
        newn = new NODE;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = First;

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

void DoublyCLL::DeleteAtPosition(int ipos)
{
    int NodeCnt = 0;
    int iCnt = 0;
    
    PNODE temp = NULL;

    NodeCnt = Count();

    if((ipos < 1) || (ipos > NodeCnt))
    {
       cout<<"Invalid Position : "<<"\n";
        return;
    }
    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == NodeCnt)
    {
        DeleteLast();
    }
    else
    {
    

        temp = First;

        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        delete(temp->next->prev);
        temp->next->prev = temp;
    }
}
int main()
{
    DoublyCLL obj1;
    int iRet = 0;

    obj1.InsertFirst(51);
     obj1.InsertFirst(21);
      obj1.InsertFirst(11);
     obj1.Display();
      iRet = obj1.Count();
      cout<<"Count of Doubly Circluar is : "<<iRet<<"\n";


      obj1.InsertLast(101);
      obj1.InsertLast(111);
      obj1.InsertLast(121);

     obj1.Display();
      iRet = obj1.Count();
      cout<<"Count of Doubly Circluar is : "<<iRet<<"\n";



      obj1.InsertAtPosition(105,5);
       obj1.Display();
      iRet = obj1.Count();
      cout<<"Count of Doubly Circluar is : "<<iRet<<"\n";


       obj1.DeleteAtPosition(5);
       obj1.Display();
      iRet = obj1.Count();
      cout<<"Count of Doubly Circluar is : "<<iRet<<"\n";






      obj1.DeleteFirst();
      obj1.Display();
      iRet = obj1.Count();
      cout<<"Count of Doubly Circluar is : "<<iRet<<"\n";



      obj1.DeleteLast();
      obj1.Display();
      iRet = obj1.Count();
      cout<<"Count of Doubly Circluar is : "<<iRet<<"\n";





    return 0;
}


   