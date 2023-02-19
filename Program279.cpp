#include<iostream>
using namespace std;
template<class T>
struct node
{
    T data;
    struct node *next;
};


template<class T>
class SinglyLL
{
    public:
    struct node<T> * First;

    SinglyLL();
    void InsertFirst(T no);
    void InsertLast(T no);
    void Display();
    int Count();
    void DeleteFirst();
    void DeleteLast();
    


};
template<class T>
SinglyLL<T> ::SinglyLL()
{
    First = NULL;
}
template<class T>
void SinglyLL<T> :: InsertFirst(T no)
{
     
    struct node<T> * newn = new  node<T>;  

     newn -> data = no;
    newn->next = NULL;


     if(First == NULL)
     {
        First = newn;
     }
     else 
     {
        newn->next = First;
        First = newn;
     }
}
template<class T>
void SinglyLL<T>:: Display()
{
    struct node<T> * temp = First;
    while(temp != NULL)
    {
        
        cout<<"| "<<temp->data<<" |-> ";
        temp = temp -> next;
    }
    cout<<"NULL\n";
    
}
template<class T>
int SinglyLL<T>:: Count()
{
    struct node<T> *  temp = First;
    int iCnt = 0;
    while(temp != NULL)
    {
       iCnt++;
        temp = temp->next;
    }
    return iCnt;
    


}
template<class T>
void SinglyLL<T>:: InsertLast(T no)
{
    struct node<T> * newn = new  node<T>;  

     newn -> data = no;
    newn->next = NULL;


     if(First == NULL)
     {
        First = newn;
     }
     else 
     {
       struct node<T> *temp = First;
       while(temp->next != NULL)
       {
           temp = temp->next;
       }
       temp->next = newn;
     }

}
template <class T>
void SinglyLL<T>:: DeleteFirst()
{
    if(First == NULL)
    {
        cout<<"Invalid Linked List is Empty "<<"\n";
        return;
    }
    else if(First-> next == NULL)
    {
        delete(First);
        First = NULL;
    }
     else
     {
        struct node<T> * temp = First;
        First = First->next;
        delete(temp);
     }
}
template <class T>
void SinglyLL<T>:: DeleteLast()
{
    if(First == NULL)
    {
        cout<<"Invalid Linked List is Empty "<<"\n";
        return;
    }
    else if(First-> next == NULL)
    {
        delete(First);
        First = NULL;
    }
     else
     {
        struct node<T> * temp = First;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete(temp->next);
        temp->next = NULL;
     }
}

int main()
{
    int iRet = 0;
    SinglyLL <int>iobj;

    iobj.InsertFirst(101);
    iobj.InsertFirst(51);
    iobj.InsertFirst(21);
    iobj.InsertFirst(11);

    iobj.Display();
     iRet = iobj.Count();
    cout<<"Number of nodes Are : "<<iRet<<"\n";

    iobj.InsertLast(111);
    iobj.InsertLast(121);
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



    SinglyLL <double>dobj;

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



    SinglyLL <char>cobj;
   cobj.InsertFirst('A');
    cobj.InsertFirst('B');
    cobj.Display();
     iRet = cobj.Count();
    cout<<"Number of nodes Are : "<<iRet<<"\n";

    cobj.InsertLast('C');
    cobj.InsertLast('D');
       cobj.Display();
     iRet = cobj.Count();
    cout<<"Number of nodes Are : "<<iRet<<"\n";


     SinglyLL <float>fobj;
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