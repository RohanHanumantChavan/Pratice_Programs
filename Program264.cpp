#include<iostream>
using namespace std;
double Addition(double i, double j)
{
    double iAns = 0.0;
    iAns = i + j;
    return iAns;
}
int main()
{
    double iValue1 = 11.9;
    double iValue2 = 10.1;
    double dRet = 0.0;

    dRet = Addition(iValue1,iValue2);
    cout<<"Addition is : "<<iRet<<"\n";


    return 0;
}