#include<stdio.h>
#include<stdlib.h>
float Average(int Arr[], int iSize)
{
    int iSum = 0;
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return(iSum /iSize); 

}
int main()
{
    int iLength = 0, i = 0;
    int *ptr = NULL;
    float fRet = 0.0f;


    printf("Enter the Number of elements\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Please Enter the Number: ");
    for( i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    fRet = Average(ptr,iLength);

    printf("Average is : %f\n",fRet);

    free(ptr);


    return 0;
}