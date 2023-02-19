#include<iostream>
using namespace std;
template<class T>
struct node
{
    T data;
    struct node *next;
};
template<class T>
class SinglyCLL
{
    public:
    struct node<T> *First;
    struct node<T> *Last;

    SinglyCLL();
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
 SinglyCLL<T>::SinglyCLL()
 {
    First = NULL;
    Last = NULL;
 }
 template<class T>
void SinglyCLL<T>:: InsertFirst(T no)
{
    struct node<T> * newn = new node<T>;
    newn->data = no;
    newn->next = NULL;
    

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
        Last->next = First;
    }
    else
    {
        newn->next = First;
        First = newn;
        Last->next = First;
    }

}
template<class T>
void SinglyCLL<T>:: InsertLast(T no)
{
     struct node<T> *newn = new node<T>;
    newn->data = no;
    newn->next = NULL;
    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
        Last->next = First;
    }
    else
    {
        Last->next = newn;
        Last = newn;
        Last->next = First;
    }

}
template<class T>
void SinglyCLL<T>:: Display()
{
    struct node<T> *temp = First;
    cout<<"Elements of Singly Circular Linked List Are : "<<"\n";
    do
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp->next;
    }while(temp != Last->next);
    cout<<"\n";
    

}
template<class T>
int SinglyCLL<T>:: Count()
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
void SinglyCLL<T>:: DeleteFirst()
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
        Last->next = First;

    }

}
template<class T>
void SinglyCLL<T>:: DeleteLast()
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
        struct node<T> *temp = First;
        while(temp->next != Last)
        {
            temp = temp->next;
        }
        delete(temp->next);
        Last = temp;
        Last->next = First;
        
    }

}
template<class T>
void SinglyCLL<T>:: InsertAtPosition(T no, int ipos)
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

        int iCnt = 0;
        struct node<T> *temp = First;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;

    }

}
template<class T>
void SinglyCLL<T>:: DeleteAtPosition(int ipos)
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
        struct node<T> *temp1 = First;
         struct node<T> *temp2 = 0;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        delete(temp2);
    }

}
int main()
{
      int iRet = 0;
    SinglyCLL <int>iobj;

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

    


    return 0;
}