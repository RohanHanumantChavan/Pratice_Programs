#include<stdio.h>

void Display(int iValue)
{
    int iSize = iValue;
    int iCnt = 0;
    iCnt = 1;
    while( iCnt <= iSize)
    {
        printf("Jay Ganesh..\n");
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