#include<stdio.h>
int main()
{
    int iNo1 = 0;int iNo2 = 0;int iAns = 0;
    

    printf("Enter first number\n");
    scanf("%d",&iNo1);

    printf("Enter seconde number\n");
    scanf("%d",&iNo2);

    iAns = iNo1 + iNo2;
    printf("Addition is :%d\n",iAns);
    return 0;
}