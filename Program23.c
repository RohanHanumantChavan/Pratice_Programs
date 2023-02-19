#include<stdio.h>
void Display(int iValue)
{
    // int iSize = iValue;
    int iCnt = 0;
    for(iCnt = 0; iCnt <= iValue; iCnt++)
    {

    printf("Marvellous:%d\n",iCnt);

    }
}
int main()
{
    int iNo = 0;

    printf("Enter the number of iteration : \n");
    scanf("%d",&iNo);
    Display(iNo);
    return 0;
}