#include<iostream>
using namespace std;
template <class T>
T Addition(T Arr[], int iSize)
{
    int iCnt = 0;
    T Sum;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        Sum = Sum = Arr[iCnt]; 
    }
   return Sum;
}


int main()
{
   int Datai[] = {10,20,30,40};
   int iRet = Addition(Datai,4);
   cout<<"Addition of Int is : "<<iRet<<"\n";


double Datad[] = {10.1,20.2,30.3,40.4};
double dRet = Addition(Datad,4);
cout<<"Addition of Double is : "<<dRet<<"\n";

   
     
    return 0;
}