#include<stdio.h>
void Display(int iValue)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt < iValue;iCnt++)
    {
        printf("Inside the For loop \n");
        printf("Marvellous :%d\n",iCnt);
    }

    iCnt = 1;
    while(iCnt < iValue)
    {
        printf("Inside the While loop \n");
        printf("Marvellous : %d\n",iCnt);
        iCnt++;
    }

}
int main()
{
    int iNo = 0;
    printf("Enter the number of iteration\n");
    scanf("%d",&iNo);
    Display(iNo);

    return 0;
}