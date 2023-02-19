#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
//

// 0000 0000 0000 0000  0000  0010  0000  0000
//   0    0    0    0     0     2      0     0
//  00000200
//  0X00000200
bool CheckBits(UINT No)
{
   UINT Mask = 0X00000200;
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