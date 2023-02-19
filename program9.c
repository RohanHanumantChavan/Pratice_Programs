#include<stdio.h>
int DivisibleByFive(int iNo)
{
    int iAns = 0;
    iAns = iNo % 5;
    if(iAns != 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = DivisibleByFive(iValue);

    if(iRet != 0)
    {
        printf("Number is divsible by 5 : %d\n",iValue);
    }
    else
    {
        printf("Number is not divsible by 5 :%d\n",iValue);
    }
    return 0;
}