#include<stdio.h>
#include<stdlib.h>
void DisplayEvenOddSum(int Arr[],int iSize)
{
    int iCnt = 0; 
    int iSumEven = 0;
    int iSumOdd = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2)== 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
        

    }
        printf("Summination of Even Number : %d\n",iSumEven);
        printf("Summination of Odd Number : %d\n",iSumOdd);
    

}
int main()
{
    int *ptr = NULL;
    int iLength = 0,i = 0,iRet = 0;

    printf("Enter Number of Elements : \n");
    scanf("%d",&iLength);

    ptr = (int * )malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);

    }

 DisplayEvenOddSum(ptr,iLength);
    

    free(ptr);

    return 0;
}