#include<stdio.h>
void DisplayR(int No)
{
    static int iCnt = 1;
    if(iCnt <= No)
    {
        printf("*\t");
        iCnt++;
        DisplayR(No);  //Recursive Call
    }

    
}

int main()
{
    int Value = 0;
    printf("Please Enter Number \n");
    scanf("%d",&Value);
   
    DisplayR(Value);

    printf(" \n  End Of Main \n");

    return 0;
}