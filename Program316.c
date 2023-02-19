#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBits(UINT No, UINT Pos)
{
    UINT Mask = 0X00000001;
    UINT iResult = 0;
    if((Pos < 1) || (Pos > 32))
    {
         printf("Invalid Position it Should between 1 to 32 \n");
         return false;
    }
    Mask = Mask << (Pos -1);
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
    UINT Position = 0;
    bool bRet = false;
    
    printf("Please Enter Number \n");
    scanf("%d",&iValue);

    printf("Please Enter Position \n");
    scanf("%d",&Position);

    bRet = CheckBits(iValue,Position);
    if(bRet == true)
    {
       printf(" %d thise Position of Bits is ON  \n",Position);
    }
    else
    {
        printf(" %d thise Position of Bits is OFF  \n ",Position);
    }



    
    
} 