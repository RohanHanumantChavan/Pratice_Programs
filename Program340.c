/*


*/
#include<stdio.h>
int SumDigitR(int No)
{
    static int iCnt = 0;
    static int Sum = 0;
    int Digit = 0;
    if( No != 0)
    {
        Digit = No % 10;
        Sum = Sum + Digit;
        No = No / 10;
        SumDigitR(No);
        
        
    }
    return Sum;
    
}
int main()
{
    int Value = 0;
    int iRet = 0;
    
    printf("Please Enter Digit \n");
    scanf("%d",&Value);

    iRet = SumDigitR(Value);
    printf("Summation Of Digit is : %d\n",iRet);
    
   
    
    return 0;
}