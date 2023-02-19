#include<stdio.h>

void Display(int iValue)
{
    int iSize = iValue;
    int iCnt = 0;
    iCnt = 1;
    while( iCnt <= iSize)
    {
        printf("Marvellous :%d\n",iCnt);
        iCnt++;
    }
}

int main()
{
    int iNo = 0;
    printf("Enter the number of iteration\n");
    scanf("%d",&iNo);
    Display(iNo);
}