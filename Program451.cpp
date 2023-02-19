#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////
// Structure for Singly Linear and Singly Circular
template <class T>
struct nodeS
{
    T data;
    struct nodeS *next;
};

////////////////////////////////////////////////////////////////
// Structure for Doubly Linear and doubly Circular
template <class T>
struct nodeD
{
    T data;
    struct nodeD *next;
    struct nodeD *prev;
};

////////////////////////////////////////////////////////////////

// Class of Singly Linear Linked List
template <class T>
class SinglyLL
{
    public:
        struct nodeS<T> * First;

        SinglyLL();

        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPosition(T no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int iPos);

        void Display();
        int Count();

};

template<class T>
SinglyLL<T> ::SinglyLL()
{
    First = NULL;
}
template<class T>
void SinglyLL<T> :: InsertFirst(T no)
{
     
   struct nodeS<T> * newn = new  nodeS<T>;  
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
    struct nodeS<T> * temp = First;
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
    struct nodeS<T> *  temp = First;
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
    struct nodeS<T> * newn = new  nodeS<T>;   

     newn -> data = no;
    newn->next = NULL;


     if(First == NULL)
     {
        First = newn;
     }
     else 
     {
       struct nodeS<T> *temp = First;
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
        struct nodeS<T> * temp = First;
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
        struct nodeS<T> * temp = First;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete(temp->next);
        temp->next = NULL;
     }
}
template <class T>
void SinglyLL<T>:: InsertAtPosition(T no, int ipos)
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
    struct nodeS<T> * newn = new  nodeS<T>;    
    newn -> data = no;
    newn->next = NULL;

    struct nodeS<T> *temp = First;
    
    for(int iCnt = 0; iCnt < ipos-1; iCnt++)
    {
        temp = temp->next;
    }
    newn->next = temp->next;
    temp->next = newn;

    }
    

}
template <class T>
void SinglyLL<T>:: DeleteAtPosition(int ipos)
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
    struct nodeS<T> *temp1 = First;
    struct nodeS<T> *temp2 = 0;

    for(int iCnt = 0; iCnt < ipos-1; iCnt++)
    {
        temp1 = temp1->next;
    }
    temp2 = temp1->next;
    temp1->next = temp2->next;
    delete(temp2);

        
    }

}

////////////////////////////////////////////////////////////////

// Class of Singly Circular Linked List
template <class T>
class SinglyCL
{
    public:
        struct nodeS<T> * First;
        struct nodeS<T> *Last;

        SinglyCL();

        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPosition(T no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int iPos);

        void Display();
        int Count();
};
template<class T>
 SinglyCL<T>::SinglyCL()
 {
    First = NULL;
    Last = NULL;
 }
 template<class T>
void SinglyCL<T>:: InsertFirst(T no)
{
    struct nodeS<T> * newn = new nodeS<T>;
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
void SinglyCL<T>:: InsertLast(T no)
{
     struct nodeS<T> *newn = new nodeS<T>;
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
void SinglyCL<T>:: Display()
{
    struct nodeS<T> *temp = First;
    cout<<"Elements of Singly Circular Linked List Are : "<<"\n";
    do
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp->next;
    }while(temp != Last->next);
    cout<<"\n";
    

}
template<class T>
int SinglyCL<T>:: Count()
{
     struct nodeS<T> *temp = First;
     int iCnt = 0;
    
    do
    {
        iCnt++;
        temp = temp->next;
    }while(temp != Last->next);
    
    return iCnt;


}
template<class T>
void SinglyCL<T>:: DeleteFirst()
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
void SinglyCL<T>:: DeleteLast()
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
        struct nodeS<T> *temp = First;
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
void SinglyCL<T>:: InsertAtPosition(T no, int ipos)
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
        struct nodeS<T> *newn = new nodeS<T>;
        newn->data = no;
        newn->next = NULL;

        int iCnt = 0;
        struct nodeS<T> *temp = First;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;

    }

}
template<class T>
void SinglyCL<T>:: DeleteAtPosition(int ipos)
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
        struct nodeS<T> *temp1 = First;
         struct nodeS<T> *temp2 = 0;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        delete(temp2);
    }

}

////////////////////////////////////////////////////////////////

// Class of Doubly Linear Linked List

template <class T>
class DoublyLL
{
    public:
        struct nodeD<T> * First;

        DoublyLL();

        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};

////////////////////////////////////////////////////////////////

// Class of Doubly Circular Linked List

template <class T>
class DoublyCL
{
    public:
        struct nodeD<T> * First;

        DoublyCL();
        
        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};

////////////////////////////////////////////////////////////////

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




    ////////////////////////////////////////////////////////////////

    //SinglyCircular;

    iRet = 0;
    SinglyCL<int>iobj2;

    iobj2.InsertFirst(101);
    iobj2.InsertFirst(51);
    iobj2.InsertFirst(21);
    iobj2.InsertFirst(11);

    iobj2.Display();
     iRet = iobj2.Count();
    cout<<"Number of nodes Are : "<<iRet<<"\n";

    iobj2.InsertLast(111);
    iobj2.InsertLast(121);
    iobj2.Display();
    iRet = iobj2.Count();
    cout<<"Number of nodes Are : "<<iRet<<"\n";

    iobj2.InsertAtPosition(105,5);
    iobj2.Display();
    iRet = iobj2.Count();
    cout<<"Number of nodes Are : "<<iRet<<"\n";

    iobj2.DeleteAtPosition(5);
    iobj2.Display();
    iRet = iobj2.Count();
    cout<<"Number of nodes Are : "<<iRet<<"\n";

    iobj2.DeleteFirst();
    iobj2.Display();
    iRet = iobj2.Count();
    cout<<"Number of nodes Are : "<<iRet<<"\n";

    iobj2.DeleteLast();
    iobj2.Display();
    iRet = iobj2.Count();
    cout<<"Number of nodes Are : "<<iRet<<"\n";




    
    return 0;
}