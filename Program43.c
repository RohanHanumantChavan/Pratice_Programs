#include<stdio.h>
void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;
    for(iCnt = 2; iCnt <=(iNo/2); iCnt+2)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }

}
int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d\n",&iValue);

    DisplayEvenFactor(iValue);


    return 0;
}