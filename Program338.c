/*


*/
#include<stdio.h>
#include<stdbool.h>
bool CheckPerfectR(int No)
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
        CheckPerfectR(No);
    }
    if(Sum == No)
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
    int Value = 0;
    bool bRet = false;
    
    printf("Please Enter Number \n");
    scanf("%d",&Value);

    bRet = CheckPerfectR(Value);
    if(bRet == true)
    {
        printf("Number is Perfect  \n");
    }
    else
    {
        printf("Number is Not Perfect  \n");
    }
    
    
   
    
    return 0;
}