#include<stdio.h>
void DisplayOddFactor(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <=(iNo/2); iCnt=iCnt+2)
    {
        if((iNo % iCnt )== 0) 
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

    DisplayOddFactor(iValue);


    return 0;
}