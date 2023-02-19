#include<iostream>
using namespace std;
#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;     //x
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node ** PPNODE;
class DoublyLL
{
    public:
    PNODE First;
    int iCount;

    DoublyLL();

    void InsertFirst(int no);
    void InsertLast(int no);

    void InsertAtPosition(int no, int ipos);
    void DeleteAtPosition(int ipos);

    void DeleteFirst();
    void DeleteLast();

    void Display();


    

};
DoublyLL :: DoublyLL()
{
    First = NULL;
    iCount = 0;
    
}

void DoublyLL:: InsertFirst(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;   //x

    if(First == NULL)
    {
        First = newn;
        iCount++;
    }
    else
    {
        newn->next = First;
        (First)->prev = newn;    //x
        First = newn;
        iCount++;
        
    }

}
void DoublyLL:: InsertLast(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    PNODE temp = NULL;

    if(First == NULL)
    {
        First = newn;
        iCount++;
    }
    else
    {
        temp = First;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;     //x
        iCount++;
        
        
    }

}

void DoublyLL :: InsertAtPosition(int no, int ipos)
{
    

    if((ipos < 1) || (ipos > iCount+1))
    {
        cout<<"Invalid Statement : "<<"\n";
        return;
    }
    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE newn = new NODE;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        PNODE temp = First;

        for(int iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;    //x
        temp->next = newn;
        newn->prev = temp;    //x
        iCount++;

    }

}
void DoublyLL:: DeleteAtPosition(int ipos)
{

    if((ipos < 1) || (ipos > iCount+1))
    {
        cout<<"Invalid Statement : "<<"\n";
        return;
    }
    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iCount+1)
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
        temp2->next->prev = temp1;    //x
        delete(temp2);
        iCount--;

        
    }

}

void DoublyLL:: DeleteFirst()
{
    PNODE temp = NULL;
    if(First == NULL)
    {
        cout<<"Invalid Statements "<<"\n";
        return;
    }
    else if(First->next == NULL)
    {
        delete(First);
        First = NULL;
        iCount--;
    }
    else
    {
        temp = First;
        First = First->next;
        First->next->prev = NULL;     //x
        delete(temp);
        iCount--;

    }

}
void DoublyLL:: DeleteLast()
{
    if(First == NULL)
    {
        cout<<"Invalid Statements "<<"\n";
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        PNODE temp = First;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete(temp->next);
        temp->next = NULL;
        iCount--;
        
    }

}

void DoublyLL:: Display()
{
    
        cout<<"Elments of Linked List Are : "<<"\n";
        PNODE temp = First;
        cout<<"NULL<==>";
        while(temp != NULL)
        {
            cout<<"|"<<temp->data<<"<==>";
            temp = temp->next;

        }
        
        cout<<"NULL"<<"\n";
    

}

int main()
{
    DoublyLL obj1;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.Display();
    cout<<"Count of Singly linked list Elements Are : "<<obj1.iCount<<"\n";

    obj1.InsertLast(101);
    obj1.InsertLast(111);
    obj1.InsertLast(121);
     obj1.Display();
    cout<<"Count of Singly linked list Elements Are : "<<obj1.iCount<<"\n";

    obj1.InsertAtPosition(105,5);
    obj1.Display();
    cout<<"Count of Singly linked list Elements Are : "<<obj1.iCount<<"\n";

    obj1.DeleteAtPosition(5);
    obj1.Display();
    cout<<"Count of Singly linked list Elements Are : "<<obj1.iCount<<"\n";

    



    obj1.DeleteFirst();
    obj1.Display();
    cout<<"Count of Singly linked list Elements Are : "<<obj1.iCount<<"\n";


    obj1.DeleteLast();
    obj1.Display();
    cout<<"Count of Singly linked list Elements Are : "<<obj1.iCount<<"\n";

    return 0;
}
