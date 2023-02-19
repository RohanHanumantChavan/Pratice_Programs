#include<stdio.h>
#include<stdlib.h>
int Summination(int Arr[],int iSize)
{
    int iCnt = 0, iSum = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];

    }
    return iSum;

}

int main()
{
    int iLength = 0;
    int *ptr = NULL, iRet = 0;

    printf("Enter number of element you want to store : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements of Array : \n");
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements From Array Are : \n");
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = Summination(ptr,iLength);
    printf("Summination of all elements : %d\n",iRet);

    return 0;
}