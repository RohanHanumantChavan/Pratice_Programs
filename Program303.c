#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
//0000 0000 0000 0000  0000  0000  0000  0000

//0000 0000 0000 0000  0000  0000  0111  0000

//   
//  0X000000070
//  
 UINT OffBits(UINT No)
{
   UINT iMask = 0X000000070;
   UINT iAns = 0;

   iAns = No ^ iMask;
   return iAns;

}
int main()
{
    UINT Value = 0;
    UINT iRet = 0;
    printf("Please Enter Number : \n");
    scanf("%d",&Value);

    iRet = OffBits(Value);

    printf("Updated Number is : %d\n",iRet);
    
    return 0;
}