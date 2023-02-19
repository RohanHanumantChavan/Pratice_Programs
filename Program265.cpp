#include<iostream>
using namespace std;
template <class T>
T Addition(T i, T j)
{
    T iAns;
    iAns = i + j;
    return iAns;
}
int main()
{
   

     double A = 11.9, B = 10.1, dRet = 0.0;

    dRet = Addition(A,B);
    cout<<"Addition is : "<<dRet<<"\n";


    int x = 11, y = 10, iRet = 0;
    
    iRet = Addition(x,y);
    cout<<"Addition is : "<<iRet<<"\n";


    return 0;
}