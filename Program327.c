#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
/*
      0000  0000    0000   0000   0000   1111   0000  0000

     0X000000F00

*/
bool CheckBits(UINT No)
{
    UINT Mask =  0X000000F00;
    UINT iResult = 0;
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
    UINT Value = 0;
   bool bRet = true;

    printf("Please Enter Number \n");
    scanf("%d",&Value);

    bRet = CheckBits(Value);
    if(bRet == true)
    {
        printf(" 9th,10th,11th,12th Bits is ON \n");
    }
    else
    {
         printf(" 9th,10th,11th,12th Bits is OFF \n");
    }
    
    

    return 0;
}
