/*
4
4 + 3 + 2 + 1 = 10

*/
#include<stdio.h>
int AdditionR(int No)
{
    static int Sum = 0;
    static int iCnt = 1;
    if(iCnt <= No)
    {
        Sum = Sum + iCnt;
        iCnt++;
        AdditionR(No);
    }
    return Sum;
}
int main()
{
    int Value = 0;
    int iRet = 0;
    printf("Please Enter Number \n");
    scanf("%d",&Value);

    iRet = AdditionR(Value);
    printf("Addition is : %d\n",iRet);
   
    
    return 0;
}