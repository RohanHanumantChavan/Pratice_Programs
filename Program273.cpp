#include<iostream>
using namespace std;
template <class T>
T Maximum(T Arr[], int iSize)
{
    int iCnt = 0;
    T Max = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       if(Arr[iCnt] > Max)
       {
          Max = Arr[iCnt];
       }
    }
   return Max;
}


int main()
{
   int Datai[] = {10,2,301,40};
   int iRet = Maximum(Datai,4);
   cout<<"Maximum of Int is : "<<iRet<<"\n";


double Datad[] = {10.1,20.2,30.3,40.4};
double dRet = Maximum(Datad,4);
cout<<"Maximum of Double is : "<<dRet<<"\n";

   
     
    return 0;
}