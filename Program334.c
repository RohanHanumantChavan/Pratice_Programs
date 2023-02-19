/*
4
4 + 3 + 2 + 1 = 10

*/
#include<stdio.h>
int FactorialR(int No)
{
    static int Mult = 1;
    static int iCnt = 1;
    if(iCnt <= No)
    {
        Mult = Mult * iCnt;
        iCnt++;
        FactorialR(No);
    }
    return Mult;
}
int main()
{
    int Value = 0;
    int iRet = 0;
    printf("Please Enter Number \n");
    scanf("%d",&Value);

    iRet = FactorialR(Value);
    printf("Factorial is : %d\n",iRet);
   
    
    return 0;
}