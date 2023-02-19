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
class Queue
{
    public:
    struct node<T> *First;
    

    Queue();
    bool IsQueueEmpty();
    void EnQueue(T no);
    T DeQueue();
    void Display();
    int Count();
};
     template <class T>
     Queue<T>::Queue()
     {
        First = NULL;
        
     }
     template <class T>
    bool Queue<T>:: IsQueueEmpty()
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
    template <class T>
    void Queue<T>:: EnQueue(T no)
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
            struct node<T> *temp = First;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newn;
        }
        
        cout<<"Gets Pushed Element "<<no<<" in the Queue Successfully "<<"\n";

    }
    template <class T>
    T Queue<T>:: DeQueue()
    {
        if(First == NULL)
        {
            cout<<"Unable To Pop the Element as Queue is Empty .."<<"\n";
            return -1;
        }
        else
        {
            T iValue = First->data;
            struct node<T> *temp = First;

            First = First->next;
            delete(temp);

           
            return iValue;
        }

    }
    template <class T>
    void Queue<T>::Display()
    {
        if(First == NULL)
        {
            cout<<"Queue is Empty "<<"\n";
        }
        else
        {
            cout<<"Elements of Queue Are : "<<"\n";
            struct node<T> *temp = First;
            while(temp != NULL)
            {
                cout<<" "<<temp->data<<" |->";
                temp = temp->next;
            }
            cout<<"NUll"<<"\n";
        }

    }
    template <class T>
    int Queue<T>:: Count()
    {
        int iCnt = 0;
        struct node<T> *temp = First;
         while(temp != NULL)
        {
           iCnt++;
            temp = temp->next;
        }
        return iCnt;
        
    }
int main()
{
   Queue<int>obj;
    obj.EnQueue(11);
    obj.EnQueue(21);
    obj.EnQueue(51);
    obj.EnQueue(101);

    obj.Display();
    int Ret = obj.Count();
    cout<<"Count of Queue Elements is "<<Ret<<"\n";

    int iRet = obj.DeQueue();
    cout<<"Remove Element is : "<<iRet<<"\n";

     iRet = obj.DeQueue();
    cout<<"Remove Element is : "<<iRet<<"\n";

   obj.Display();
   Ret = obj.Count();
    cout<<"Count of Queue Elements is "<<Ret<<"\n";



    return 0;
}