#include<iostream>
using namespace std;
template <class T>
void Display(T Arr[], int iSize)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
    cout<<"\n";
}


int main()
{
   int Data[] = {10,20,30,40};
   Display(Data,4);

   double Datad[] = {10.1,20.2,30.3,40.4};
   Display(Datad,4);

   char Datac[] = {'A','B','C','D'};
   Display(Datac,4); 

     
    return 0;
}