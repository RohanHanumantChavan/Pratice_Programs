#include<stdio.h>
int Summation(int iData[],int iSize)

{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + iData[iCnt];
    }
    return iSum;


}

int main()
{
   int Arr[5];
   int iCnt = 0;

   printf("Enter the elements :\n");
   for(iCnt = 0; iCnt < 5; iCnt++)
   {
    scanf("%d",&Arr[iCnt]);
   }

   printf("Element from Array are \n");

   for(iCnt = 0; iCnt < 5; iCnt++)
   {
    printf("%d\n",Arr[iCnt]);
   }

   int iRet = Summation(Arr,5);
   printf("Addition of all elements is : %d\n",iRet);




    return 0;
}