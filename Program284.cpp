#include<iostream>
using namespace std;
template<class T>
struct node
{
    T data;
    struct node *next;
    struct node *prev;
};
template<class T>
class DoublyCLL
{
    public:
    struct node<T> *First;
    struct node<T> *Last;

    DoublyCLL();
    void InsertFirst(T no);
    void InsertLast(T no);
    void Display();
    int Count();
    void DeleteFirst();
    void DeleteLast();
    void InsertAtPosition(T no, int ipos);
    void DeleteAtPosition(int ipos);

};
template<class T>
 DoublyCLL<T>::DoublyCLL()
 {
    First = NULL;
    Last = NULL;
 }
 template<class T>
void DoublyCLL<T>:: InsertFirst(T no)
{
    struct node<T> * newn = new node<T>;
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
        First = newn;
        First->prev = newn;
        
    }
    First->prev = Last;
    Last->next = First;

}
template<class T>
void DoublyCLL<T>:: InsertLast(T no)
{
     struct node<T> *newn = new node<T>;
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
        newn->prev = Last;
        Last->next = newn;
        Last = newn;
       
    }
    First->prev = Last;
    Last->next = First;


}
template<class T>
void DoublyCLL<T>:: Display()
{
    struct node<T> *temp = First;
    cout<<"Elements of Singly Circular Linked List Are : "<<"\n";
    cout<<"<==>";
    do
    {
        cout<<"| "<<temp->data<<" |<==>";
        temp = temp->next;
    }while(temp != Last->next);
    cout<<"\n";
    

}
template<class T>
int DoublyCLL<T>:: Count()
{
     struct node<T> *temp = First;
     int iCnt = 0;
    
    do
    {
        iCnt++;
        temp = temp->next;
    }while(temp != Last->next);
    
    return iCnt;


}
template<class T>
void DoublyCLL<T>:: DeleteFirst()
{
    if((First == NULL) && (Last == NULL))
    {
        cout<<"Singly CLL is Empty : "<<"\n";
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
        First = First->next;
        delete(Last->next);
        First->prev = Last;
        Last->next = First;


    }

}
template<class T>
void DoublyCLL<T>:: DeleteLast()
{
    if((First == NULL) && (Last == NULL))
    {
        cout<<"Singly CLL is Empty : "<<"\n";
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
        Last = Last->prev;
        delete(First->prev);
        First->prev = Last;
        Last->next = First;

        
    }

}
template<class T>
void DoublyCLL<T>:: InsertAtPosition(T no, int ipos)
{
    int NodeCnt = 0;
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
        struct node<T> *newn = new node<T>;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        int iCnt = 0;
        struct node<T> *temp = First;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        newn->prev = temp;
        temp->next = newn;

    }

}
template<class T>
void DoublyCLL<T>:: DeleteAtPosition(int ipos)
{
    int NodeCnt = 0;
    NodeCnt = Count();
    if((ipos < 1) || (ipos > NodeCnt+1))
    {
        cout<<"Invalid Position : "<<"\n";
        return;
    }
    if(ipos == 1)
    {
        DeleteFirst();

    }
    else if(ipos == NodeCnt+1)
    {
       DeleteLast();
    }
    else
    {
          int iCnt = 0;
        struct node<T> *temp = First;
         
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
      int iRet = 0;
    DoublyCLL <int>iobj;

    iobj.InsertFirst(51);
    iobj.InsertFirst(21);
    iobj.InsertFirst(11);
     iobj.Display();
     iRet = iobj.Count();
    cout<<"Number of nodes Are : "<<iRet<<"\n";

    iobj.InsertLast(101);
    iobj.InsertLast(111);
    iobj.InsertLast(121);
    iobj.Display();
    iRet = iobj.Count();
    cout<<"Number of nodes Are : "<<iRet<<"\n";

    iobj.InsertAtPosition(105,5);
    iobj.Display();
    iRet = iobj.Count();
    cout<<"Number of nodes Are : "<<iRet<<"\n";

    iobj.DeleteAtPosition(5);
    iobj.Display();
    iRet = iobj.Count();
    cout<<"Number of nodes Are : "<<iRet<<"\n";


    iobj.DeleteFirst();
    iobj.Display();
    iRet = iobj.Count();
    cout<<"Number of nodes Are : "<<iRet<<"\n";

     iobj.DeleteLast();
    iobj.Display();
    iRet = iobj.Count();
    cout<<"Number of nodes Are : "<<iRet<<"\n";


     DoublyCLL <double>dobj;

   dobj.InsertFirst(101.1f);
    dobj.InsertFirst(51.2f);
    dobj.InsertFirst(21.3f);
    dobj.InsertFirst(11.4f);

    dobj.Display();
       iRet = dobj.Count();
    cout<<"Number of nodes Are : "<<iRet<<"\n";

    dobj.InsertLast(111.2f);
    dobj.InsertLast(121.3f);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes Are : "<<iRet<<"\n";



  DoublyCLL <char>cobj;
   cobj.InsertFirst('B');
   cobj.InsertFirst('A');
    cobj.Display();
     iRet = cobj.Count();
    cout<<"Number of nodes Are : "<<iRet<<"\n";

    cobj.InsertLast('C');
    cobj.InsertLast('D');
       cobj.Display();
     iRet = cobj.Count();
    cout<<"Number of nodes Are : "<<iRet<<"\n";


     DoublyCLL <float>fobj;
    fobj.InsertFirst(10.1f);
    fobj.InsertFirst(12.2f);
    fobj.Display();
    iRet = fobj.Count();
    cout<<"Number of nodes Are : "<<iRet<<"\n";


    fobj.InsertLast(10.1f);
    fobj.InsertLast(12.2f);
    fobj.Display();
    iRet = fobj.Count();
    cout<<"Number of nodes Are : "<<iRet<<"\n";

    


    return 0;
}