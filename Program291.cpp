#include<iostream>
using namespace std;
#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};
class Stack
{
    public:
    struct node *First;
    

    Stack();
    bool IsStackEmpty();
    void Push(int no);
    int Pop();
    void Display();
    int Count();
};
     Stack::Stack()
     {
        First = NULL;
        
     }
    bool Stack:: IsStackEmpty()
    {
        int iCount = Count();
        if(iCount == 0)
        {
            return false;
        }
        else
        {
            return true;
        }

    }
    void Stack:: Push(int no)
    {
        struct node *newn = new node;
        newn->data = no;
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
        
        cout<<"Gets Pushed Element "<<no<<" in the Stack Successfully "<<"\n";

    }
    int Stack:: Pop()
    {
        if(First == NULL)
        {
            cout<<"Unable To Pop the Element as Stack is Empty .."<<"\n";
            return -1;
        }
        else
        {
            int iValue = First->data;
            struct node *temp = First;

            First = First->next;
            delete(temp);

           
            return iValue;
        }

    }
    void Stack::Display()
    {
        if(First == NULL)
        {
            cout<<"Stack is Empty "<<"\n";
        }
        else
        {
            cout<<"Elements of Stack Are : "<<"\n";
            struct node *temp = First;
            while(temp != NULL)
            {
                cout<<" "<<temp->data<<" |->";
                temp = temp->next;
            }
            cout<<"NUll"<<"\n";
        }

    }
    int Stack:: Count()
    {
        int iCnt = 0;
        struct node *temp = First;
         while(temp != NULL)
        {
           iCnt++;
            temp = temp->next;
        }
        return iCnt;
        
    }
int main()
{
    Stack obj;
    obj.Push(101);
    obj.Push(51);
    obj.Push(21);
    obj.Push(11);

    obj.Display();
    int Ret = obj.Count();
    cout<<"Count of Stack Elements is "<<Ret<<"\n";

    int iRet = obj.Pop();
    cout<<"Poped Element is : "<<iRet<<"\n";

     iRet = obj.Pop();
    cout<<"Poped Element is : "<<iRet<<"\n";

   obj.Display();
   Ret = obj.Count();
    cout<<"Count of Stack Elements is "<<Ret<<"\n";



    return 0;
}