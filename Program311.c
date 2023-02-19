#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
/*
   4 bit Check
   int 4byte

   1byte means = 8bits

   0000   0000   0000   0000   0000   0010   0000   0000

    0      0      0      0       0      2      0      0


   0X00000200


*/
bool CheckBits(UINT No)
{
    unsigned Mask =  0X00000200;
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
        printf(" 10th Bits is On \n");
     }
     else
     {
         printf(" 10th Bits is OFF \n");
     }
    
} 