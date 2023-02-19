#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
/*
   4 bit Check
   int 4byte

   1byte means = 8bits

   0000  0000  0000   0000  0000  0000  0000  1000

   0000  0000  0000   0000  0000  0000  0000  1000


   0X00000008


*/
bool CheckBits(UINT No)
{
    unsigned Mask = 0X00000008;
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