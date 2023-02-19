#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
/*
   4 bit Check
   int 4byte

   1byte means = 8bits

   7 8 9 check bits

   0000   0000   0000   0000   0000   0001   1100   0000

    0      0      0      0       0      1      C      0


   0X000001C0


*/
bool CheckBits(UINT No)
{
    unsigned Mask =   0X000001C0;
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
        printf(" 7th, 8th, 9th Bits is On \n");
     }
     else
     {
         printf(" 7th, 8th, 9th Bits is OFF \n");
     }
    
} 