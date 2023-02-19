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
        First = Last = newn;
        (Last)->next = First;
        (First)->prev = Last;
    }
    else
    {
        newn->next = First;
        First = newn;
        (Last)->next = First;
        (First)->prev = Last;
    }
    

 }
void DoublyCLL:: InsertLast(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = Last = newn;
        (Last)->next = First;
        (First)->prev = Last;
    }
    else
    {
        (Last)->next = newn;
        newn->prev = Last;
         Last = newn;
        (Last)->next = First;
        (First)->prev = Last;


    }
     


}
void DoublyCLL:: InsertAtPosition(int no, int ipos)
{

    int NodeCnt = 0;
    PNODE temp = First;
    PNODE newn = NULL;
    int iCnt = 0;

    NodeCnt = Count();

    if((ipos < 1) || (ipos > NodeCnt+1))
    {
        cout<<"Invalid Position "<<"\n";
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

void DoublyCLL:: DeleteFirst()
{
    PNODE temp = First;

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
        temp = First;
        First = (First)->next;
        delete(temp);
        (First)->prev = Last;
        (Last)->next = First;
        



    }

}
void DoublyCLL:: DeleteLast()
{

    PNODE temp = First;
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
        while(temp->next != (Last))
        {
            temp = temp->next;
        }
        delete(temp->next);
        Last = temp;
        (First)->prev = Last;
        (Last)->next = First;
        

        
    }

}
void DoublyCLL:: DeleteAtPosition(int ipos)
{

    int NodeCnt = 0;
    int iCnt = 0;
    PNODE temp1 = First;
    PNODE temp2 = NULL;
    

    NodeCnt = Count();

    if((ipos < 1) || (ipos > NodeCnt))
    {
        cout<<"Invalid Position "<<"\n";
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
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        temp2->next->prev = temp1;
        delete(temp2);
        
    }



}

void DoublyCLL:: Display()
{
    cout<<"Elements of Doubly Circular Linked List Are : "<<"\n";
    PNODE temp = First;
     cout<<"<==>";
    do 
    {
        
        cout<<"| "<<temp->data<<" |<==>";
        temp = temp->next;

    }while(temp != Last->next);
    cout<<"\n";


}
int DoublyCLL:: Count()
{
    int iCnt = 0;
     PNODE temp = First;
     
     
    do 
    {
       
       iCnt++;
        temp = temp->next;

    }while(temp != Last->next);

   
   return iCnt;

    
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
    cout<<"Count of Linked List Are : "<<iRet<<"\n";


    obj1.InsertLast(101);
    obj1.InsertLast(111);
   obj1.InsertLast(121);
obj1.Display();
iRet = obj1.Count();
cout<<"Count of Linked List Are : "<<iRet<<"\n";

 

 obj1.InsertAtPosition(105,5);
 obj1.Display();
 iRet = obj1.Count();
cout<<"Count of Linked List Are : "<<iRet<<"\n";

 obj1.DeleteAtPosition(5);
 obj1.Display();
 iRet = obj1.Count();
cout<<"Count of Linked List Are : "<<iRet<<"\n";


 obj1.DeleteFirst();
 obj1.Display();
 iRet = obj1.Count();
cout<<"Count of Linked List Are : "<<iRet<<"\n";


 obj1.DeleteLast();
 obj1.Display();
 iRet = obj1.Count();
cout<<"Count of Linked List Are : "<<iRet<<"\n";




    return 0;
}
