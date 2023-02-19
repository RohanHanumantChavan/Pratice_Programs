/*


*/
#include<stdio.h>
int SumFactorsR(int No)
{
    static int iCnt = 1;
    static int Sum = 0;
    if(iCnt <= (No /2))
    {
        if((No % iCnt) == 0)
        {
           Sum = Sum + iCnt;
        }
        iCnt++;
        SumFactorsR(No);
    }
    return Sum;
}
int main()
{
    int Value = 0;
    int iRet = 0;
    
    printf("Please Enter Number \n");
    scanf("%d",&Value);

    iRet = SumFactorsR(Value);
    printf("Addition Of Factors is : %d\n",iRet);
    
   
    
    return 0;
}