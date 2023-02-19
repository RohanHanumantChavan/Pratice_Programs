/*


*/
#include<stdio.h>
int CountDigitR(int No)
{
    static int iCnt = 0;

    if( No != 0)
    {
        
        iCnt++;
        No = No / 10;
        CountDigitR(No);
        
        
    }
    return iCnt;
    
}
int main()
{
    int Value = 0;
    int iRet = 0;
    
    printf("Please Enter Digit \n");
    scanf("%d",&Value);

    iRet =CountDigitR(Value);
    printf("Count Of Digit is : %d\n",iRet);
    
   
    
    return 0;
}