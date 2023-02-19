#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
/*
   4 bit Check
   int 4byte

   1byte means = 8bits

   0000   0000   0000   0000   0000   0000   0000   0000

   0000   0000   0000   0000   0000   0000   0000   0111

   
    0X00000007


*/
UINT ToggleBits(UINT No)
{
    unsigned Mask =   0X00000007;
    

    return(No ^ Mask);

   
    
}

int main()
{
    UINT iValue = 0;
    UINT Ret = 0;
    
    printf("Please Enter Number \n");
    scanf("%d",&iValue);

     Ret = ToggleBits(iValue);
     printf("Updated Number is : %d\n",Ret);
     
    
} 