#include<iostream>
using namespace std;
int Addition(int i, int j)
{
    int iAns = 0;
    iAns = i + j;
    return iAns;
}
int main()
{
    int iValue1 = 11;
    int iValue2 = 10;
    int iRet = 0;

    iRet = Addition(iValue1,iValue2);
    cout<<"Addition is : "<<iRet<<"\n";


    return 0;
}