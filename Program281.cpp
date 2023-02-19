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
class DoublyLL
{
    public:
    struct node<T> * First;

    DoublyLL();
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
DoublyLL<T> ::DoublyLL()
{
    First = NULL;
}
template<class T>
void DoublyLL<T> :: InsertFirst(T no)
{
     
    struct node<T> * newn = new  node<T>;  
    newn -> data = no;
    newn->next = NULL;
    newn->prev = NULL;   //x


     if(First == NULL)
     {
        First = newn;
     }
     else 
     {
        newn->next = First;
        First->prev = newn;   //X
        First = newn;
     }
}
template<class T>
void DoublyLL<T>:: Display()
{
    struct node<T> * temp = First;
    cout<<"NULL <==>";
    while(temp != NULL)
    {
        
        cout<<"| "<<temp->data<<" |<==> ";
        temp = temp -> next;
    }
    cout<<"NULL\n";
    
}
template<class T>
int DoublyLL<T>:: Count()
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
void DoublyLL<T>:: InsertLast(T no)
{
    struct node<T> * newn = new  node<T>;  

     newn -> data = no;
    newn->next = NULL;
    newn->prev = NULL;   //x


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
void DoublyLL<T>:: DeleteFirst()
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
       
        First = First->next;
        delete(First->prev);    //x
        First->prev = NULL;     //x
     }
}
template <class T>
void DoublyLL<T>:: DeleteLast()
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
template <class T>
void DoublyLL<T>:: InsertAtPosition(T no, int ipos)
{
    int NodeCnt = 0;
    NodeCnt = Count();
    if((ipos < 1) || (ipos > NodeCnt+1))
    {
        cout<<"Invalid POsition "<<"\n";
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
    struct node<T> * newn = new  node<T>;  
    newn -> data = no;
    newn->next = NULL;
    newn->prev = NULL;

    struct node<T> *temp = First;
    
    for(int iCnt = 0; iCnt < ipos-1; iCnt++)
    {
        temp = temp->next;
    }
    newn->next = temp->next;
    temp->next->prev = newn;  //x
    newn->prev = temp;   //x
    temp->next = newn;

    }
    

}
template <class T>
void DoublyLL<T>:: DeleteAtPosition(int ipos)
{
    int NodeCnt = 0;
    NodeCnt = Count();
    if((ipos < 1) || (ipos > NodeCnt+1))
    {
        cout<<"Invalid POsition "<<"\n";
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
    struct node<T> *temp1 = First;
    struct node<T> *temp2 = 0;

    for(int iCnt = 0; iCnt < ipos-1; iCnt++)
    {
        temp1 = temp1->next;
    }
    temp2 = temp1->next;
    temp1->next = temp2->next;
    temp2->next->prev = temp1;   //x
    delete(temp2);

        
    }

}

int main()
{
    int iRet = 0;
    DoublyLL <int>iobj;

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



    DoublyLL <double>dobj;

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



   DoublyLL <char>cobj;
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


     DoublyLL <float>fobj;
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