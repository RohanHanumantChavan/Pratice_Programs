#include<iostream>
using namespace std;
#pragma pack(1)
template <class T>
struct node
{
    T data;
    struct node *next;
};
template <class T>
class Stack
{
    public:
    struct node<T> *First;
    int iCount;

    Stack();
    bool IsStackEmpty();
    void Push(T no);
    T Pop();
    void Display();
};
template <class T>
 Stack<T>::Stack()
{
 First = NULL;
iCount = 0;
}
template <class T>
 bool Stack<T>:: IsStackEmpty()
    {
        if(iCount == 0)
        {
            return false;
        }
        else
        {
            return true;
        }

    }
    template <class T>
    void Stack<T>:: Push(T no)
    {
        struct node<T> *newn = new node<T>;
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
        iCount++;
        cout<<"Gets Pushed Element "<<no<<" in the Stack Successfully "<<"\n";

    }
    template <class T>
    T Stack<T>:: Pop()
    {
        if(First == NULL)
        {
            cout<<"Unable To Pop the Element as Stack is Empty .."<<"\n";
            return -1;
        }
        else
        {
            T iValue = First->data;
            struct node<T> *temp = First;

            First = First->next;
            delete(temp);

            iCount--;
            return iValue;
        }

    }
    template <class T>
    void Stack<T>::Display()
    {
        if(First == NULL)
        {
            cout<<"Stack is Empty "<<"\n";
        }
        else
        {
            cout<<"Elements of Stack Are : "<<"\n";
            struct node<T> *temp = First;
            while(temp != NULL)
            {
                cout<<" "<<temp->data<<" |->";
                temp = temp->next;
            }
            cout<<"NUll"<<"\n";
        }

    }
int main()
{
    Stack<int>obj;
    obj.Push(101);
    obj.Push(51);
    obj.Push(21);
    obj.Push(11);

    obj.Display();

    int iRet = obj.Pop();
    cout<<"Poped Element is : "<<iRet<<"\n";

     iRet = obj.Pop();
    cout<<"Poped Element is : "<<iRet<<"\n";

   obj.Display();


    return 0;
}