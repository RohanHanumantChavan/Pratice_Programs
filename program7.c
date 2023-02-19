#include<stdio.h>
int Multiplication(int ivalue1,int
ivalue2)
{
    int iret = 0;
    iret = ivalue1 * ivalue2;
    return iret;
}
int main()
{
    int iNo1 = 0; int iNo2 = 0;
    int iMult = 0;

     printf("Enter first number :\n");
    scanf("%d",&iNo1);

    printf("Enter seconde number :\n");
    scanf("%d",&iNo2);

    iMult = Multiplication(iNo1,iNo2);

    printf("Multiplication is :%d\n",iMult);


    return 0;
}