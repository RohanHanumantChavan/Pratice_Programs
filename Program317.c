#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBits(UINT No, UINT Pos1, UINT Pos2)
{
    UINT Mask1 = 0X00000001;
    UINT Mask2 = 0X00000001;
     UINT Mask = 0;
    UINT iResult = 0;
    if((Pos1 < 1) || (Pos1 > 32) || (Pos2 < 1) || (Pos2 > 32))
    {
         printf("Invalid Position it Should between 1 to 32 \n");
         return false;
    }
    Mask1 = Mask1 << (Pos1 -1);
    Mask2 = Mask2 << (Pos2 -1);

    Mask = Mask1 | Mask2;

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
    UINT Position1 = 0;
    UINT Position2 = 0;
    bool bRet = false;
    
    printf("Please Enter Number \n");
    scanf("%d",&iValue);

    printf("Please Enter Position1 \n");
    scanf("%d",&Position1);

    printf("Please Enter Position2 \n");
    scanf("%d",&Position2);

    bRet = CheckBits(iValue,Position1,Position2);
    if(bRet == true)
    {
       printf(" %d & %d thise Position of Bits is ON  \n",Position1,Position2);
    }
    else
    {
        printf(" %d  & %d thise Position of Bits is OFF  \n ",Position1,Position2);
    }



    
    
} 