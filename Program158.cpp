#include<iostream>
using namespace std;

class ArrayX
{
  public:
  int * Arr;
  int iSize;

  ArrayX(int i)
  {
    iSize = i;
    Arr = new int[iSize];
  }

  void Accept()
  {
    cout<<"Please enter the Number : "<<"\n";
    int iCnt = 0;

    for(iCnt = 0; iCnt <iSize; iCnt++)
    {
      cin>>Arr[iCnt];
    }
  }

  void Display()
  {
    cout<<"Elements of Array Are : "<<"\n";
    int iCnt = 0;

    for(iCnt = 0; iCnt <iSize; iCnt++)
    {
      cout<<Arr[iCnt]<<"\n";
    }
    cout<<"\n";
  }

  
};



int main()
{
  int iLength = 0;
  cout<<"Enter the Number of Elements : "<<"\n";
  cin>>iLength;

  ArrayX obj(iLength);

  obj.Accept();
  obj.Display();

  
  
    return 0;
}