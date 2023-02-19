#include<iostream>
using namespace std;
#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node  NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCLL
{
    public:
    PNODE First;
    PNODE Last;
    

    SinglyCLL();

    void InsertFirst(int no);
    void InsertLast(int no);

    void InsertAtPosition(int no, int ipos);
    void DeleteAtPosition(int ipos);

    void DeleteFirst();
    void DeleteLast();

    void Display();
    int Count();
};

SinglyCLL :: SinglyCLL()
{
    First = NULL;
    Last = NULL;
    
}


void SinglyCLL:: InsertFirst(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))
    {
         First = Last = newn;
         (Last)->next = First;
        
    }
    else
    {
        newn->next = First;
        First = newn;
        (Last)->next = First;
        
    }

}
void SinglyCLL:: InsertLast(int no)
{
     PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    if((First == NULL) && (Last == NULL))
    {
         First = Last = newn;
         Last->next = First;
         
    }
    else
    {
       (Last)->next = newn;
       Last = newn;
       (Last)->next = First;
       
    }


}


void SinglyCLL:: InsertAtPosition(int no, int ipos)
{
    int NodeCnt = 0;
    NodeCnt = Count();  
    if((ipos < 1) && (ipos > NodeCnt+1))
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
        PNODE newn = new NODE;
        newn->data = no;
        newn->next = NULL;
        PNODE temp = First;
        for(int iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
         Last->next = First;
         


    }


}
void SinglyCLL:: DeleteAtPosition(int ipos)
{
    int NodeCnt = 0;
    NodeCnt = Count();  
    if((ipos < 1) && (ipos > NodeCnt))
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
        PNODE temp1 = First;
        PNODE temp2 = NULL;

        for(int iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        delete(temp2);
         Last->next = First;
        
        
    }


}

void SinglyCLL:: DeleteFirst()
{
    PNODE temp = First;
    if((First == NULL) && (Last == NULL))
    {
        cout<<"Empty Linked List"<<"\n";
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
        
        First = temp->next;
        delete(temp);
         (Last)->next = First;
         
    }


}
void SinglyCLL:: DeleteLast()
{
    if((First == NULL) && (Last == NULL))
    {
        cout<<"Empty Linked List"<<"\n";
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
        PNODE temp = First;
        do
        {
            temp = temp->next;
        }while(temp->next != (Last));

        delete(temp->next);
        Last = temp;
        (Last)->next = First;
    }



}

void SinglyCLL:: Display()
{
    
    cout<<"Elements of Linked List Are : "<<"\n";
    PNODE temp = First;
    do 
    {
     cout<<" |"<<temp->data<<"|->";
      temp = temp->next;
    }while(temp != Last->next);
    cout<<"\n";
}


int SinglyCLL:: Count()
{
    PNODE temp = First;
    int iCnt = 0;
    do
    {
        iCnt++;
        temp = temp -> next;
    }while(temp != Last->next);
    return iCnt;
}




int main()
{
    SinglyCLL obj1;
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