#include<iostream>
using namespace std;
class ArrayX
{
  public:
  int *Arr;
  int iSize;

  ArrayX(int i)
  {
    iSize = i;
    Arr = new int[iSize];
  }
  ~ArrayX()
  {
    delete []Arr;
  }
  void Accept()
  {
    cout<<"Enter the Elements of Array : "<<"\n";

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
      cin>>Arr[iCnt];
    }
  }

   void Display()
  {
    cout<<" Elements of Array Are : "<<"\n";

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
      cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
  }


};
int main()
{

  ArrayX obj(5);

  obj.Accept();
  obj.Display();
  return 0;
}