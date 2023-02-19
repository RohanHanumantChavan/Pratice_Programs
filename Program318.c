#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
/*
   4 bit Check
   int 4byte

   1byte means = 8bits

  
   0000   1111   0000   1111   0000   1111   0000   1111 
    
     0X0F0F0F0F



   
   

*/
UINT ToggleNibble(UINT No)
{
    unsigned Mask =   0X0F0F0F0F;
    UINT iAns = 0;
    

    iAns = No ^ Mask;
    return iAns;

   
    
}

int main()
{
    UINT iValue = 0;
    UINT Ret = 0;
    
    printf("Please Enter Number \n");
    scanf("%d",&iValue);

     Ret = ToggleNibble(iValue);
     printf("Updated Number is : %d\n",Ret);
     
    
} 