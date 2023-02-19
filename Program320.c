#include<stdio.h>
typedef unsigned int UINT;
UINT ToggleRange(UINT No, UINT Start, UINT End)
{
    UINT Mask1 = 0, Mask2 = 0,Mask = 0, iResult = 0;

    Mask1 = Mask1 <<(Start -1);
    Mask2 = Mask2 >>(32 - 15);
    Mask = Mask1 & Mask2;

    iResult = No ^ Mask;
    return iResult;

    // 389328
    //  Start 5;
    //  End = 10;

    // 389328
    
}
int main()
{
    UINT iValue = 0;
    UINT i = 0, j = 0;
    UINT Ret = 0;

    printf("Please Enter Number \n");
    scanf("%d",&iValue);
    
    printf("Please Enter Starting bit Position \n");
    scanf("%d",&i);


    printf("Please Enter Ending bit Position \n");
    scanf("%d",&j);


    Ret = ToggleRange(iValue,i,j);
    printf("Updated Number is : %d\n",Ret);






    return 0;
}