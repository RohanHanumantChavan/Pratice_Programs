#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
//

// 0000 0000 0000 0000  0000  1000  0000  0000
//   0    0    0    0     0     8     0     0
//  00000800
//  0X00000800
bool CheckBits(UINT No)
{
   UINT Mask = 0X00000800;
   UINT Result = 0;

   Result = No & Mask;

   if(Result == Mask)
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
    bool bRet = false;
    printf("Please Enter Number : \n");
    scanf("%d",&Value);

    bRet = CheckBits(Value);
    if(bRet == true)
    {
        printf(" 10th Bit is On \n");
    }
    else
    {
        printf(" 10th Bit is Off \n");
    }
    return 0;
}