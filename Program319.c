#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
UINT OffBits(UINT No, UINT Pos)
{
    UINT Mask = 0X00000001;
    UINT iResult = 0;
    Mask = Mask <<(Pos-1);
    
    Mask = ~Mask;
    iResult = No & Mask;
    return iResult;

   

}
int main()
{
    UINT iValue = 0;
    UINT Position = 0;
    UINT iRet = 0;
    
    printf("Please Enter Number \n");
    scanf("%d",&iValue);

    printf("Please Enter Position \n");
    scanf("%d",&Position);

    iRet = OffBits(iValue,Position);
    printf("Updated Number is : %d\n",iRet);
    



    return 0;
    
} 