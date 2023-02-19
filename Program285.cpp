#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
class Stack
{
    public:
    struct node *First;
    int iCount;
    Stack();

    bool IsStackEmpty();
    void Push(int no);
    int Pop();
    void Display();
};
Stack::Stack()
{
    First = NULL;
    iCount = 0;

}
bool Stack::IsStackEmpty()
{
    if(iCount == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }

}
void Stack::Push(int no)
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
   iCount++;
   cout<<no<<"Gets Pushed in the Stack Successfull "<<"\n";
}
int Stack:: Pop()
{
    if(First == NULL)
    {
        cout<<"Unable to Pop the Element as Stack is Empty "<<"\n";
        return -1;
    }
    else
    {
        int Value = First->data;
        struct node *temp = First;

        First = First->next;
        delete temp;
        iCount--;

        return Value;
    }


}
void Stack::Display()
{
    if(First == NULL)
    {
        cout<<"Stack is Empty ."<<"\n";
    }
    else
    {
        cout<<"Elements of Stack Are : "<<"\n";
    }

    struct node *temp = First;
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp->next;
    }
    cout<<"NULL"<<"\n";
   

}
int main()
{
    Stack obj;

    obj.Push(11);
    obj.Push(21);
    obj.Push(51);
    obj.Push(101);

    obj.Display();

    int iRet = obj.Pop();
    cout<<"Poped Element is : "<<iRet<<"\n";
    
    iRet = obj.Pop();
    cout<<"Poped Element is : "<<iRet<<"\n";

    obj.Display();


    return 0;
}
