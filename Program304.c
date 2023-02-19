#include<stdio.h>

void DisplayBinary(unsigned int No)
{
    int Digit = 0;
    while(No != 0)
    {
        Digit = No % 2;
        printf("%d",Digit);
        No = No / 2;

    }
    printf("\n");
}

int main()
{
    unsigned int iValue = 0;
    
    printf("Please Enter Number \n");
    scanf("%d",&iValue);

    DisplayBinary(iValue);
} 