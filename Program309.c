#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBits(UINT No)
{
    unsigned Mask = 8;
    unsigned iResult = 0;

    iResult = No & Mask;

    if(iResult == Mask)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;
    
    printf("Please Enter Number \n");
    scanf("%d",&iValue);

     bRet = CheckBits(iValue);
     if(bRet == true)
     {
        printf(" 4th Bits is On \n");
     }
     else
     {
         printf(" 4th Bits is OFF \n");
     }
    
} 