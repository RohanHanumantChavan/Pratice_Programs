#include<iostream>
using namespace std;
#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};
class Queue
{
    public:
    struct node *First;
    

    Queue();
    bool IsQueueEmpty();
    void EnQueue(int no);
    int DeQueue();
    void Display();
    int Count();
};
     Queue::Queue()
     {
        First = NULL;
        
     }
    bool Queue:: IsQueueEmpty()
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
    void Queue:: EnQueue(int no)
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
            struct node *temp = First;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newn;
        }
        
        cout<<"Gets Pushed Element "<<no<<" in the Queue Successfully "<<"\n";

    }
    int Queue:: DeQueue()
    {
        if(First == NULL)
        {
            cout<<"Unable To Pop the Element as Queue is Empty .."<<"\n";
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
    void Queue::Display()
    {
        if(First == NULL)
        {
            cout<<"Queue is Empty "<<"\n";
        }
        else
        {
            cout<<"Elements of Queue Are : "<<"\n";
            struct node *temp = First;
            while(temp != NULL)
            {
                cout<<" "<<temp->data<<" |->";
                temp = temp->next;
            }
            cout<<"NUll"<<"\n";
        }

    }
    int Queue:: Count()
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
   Queue obj;
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