#include<stdio.h>
typedef unsigned int UINT;
int CountOnBits(UINT No)
{
    int Digit = 0;
    int iCnt = 0;
    while(No != 0)
    {
        Digit = No % 2;
        iCnt = iCnt + Digit;
        No = No / 2;
        
    }
    return iCnt;
}
int main()
{
    UINT Value = 0;
    int iRet = 0;

    printf("Please Enter Number \n");
    scanf("%d",&Value);

    iRet = CountOnBits(Value);
    printf("Count Of ON Bits is : %d\n",iRet);
    

    return 0;
}
