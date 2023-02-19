#include<stdio.h>
typedef unsigned int UINT;
int CountOffBits(UINT No)
{
    int Digit = 0;
    int iCnt = 0;
    while(No != 0)
    {
        Digit = No % 2;
        if(Digit == 0)
        {
            iCnt++;
        }
        No = No / 2;

    }
    return iCnt;
}

int main()
{
    UINT iValue = 0;
    int iRet = 0;
    
    printf("Please Enter Number \n");
    scanf("%d",&iValue);

     iRet = CountOffBits(iValue);
     printf("Count off Bits is : %d\n",iRet);
} 