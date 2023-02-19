#include<stdio.h>
typedef unsigned int UINT;
void DisplayBinary(UINT No)
{
    int Digit = 0;
    
    while(No != 0)
    {
        Digit = No % 2;
        printf("%d",Digit);
        No = No / 2;
        
    }
    
}
int main()
{
    UINT Value = 0;
    int iRet = 0;

    printf("Please Enter Number \n");
    scanf("%d",&Value);

    DisplayBinary(Value);
    
    

    return 0;
}
