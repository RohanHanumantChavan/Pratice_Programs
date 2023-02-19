#include<stdio.h>
int SumDigit(int iNo)
{
  
   
   int iSum = 0;
   int iDigit = 0;
   
   while(iNo != 0)
   {
   
   iDigit = iNo % 10;
    iNo = iNo / 10;

    iSum = iSum + iDigit;
   }
   return iSum;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = SumDigit(iValue);

    printf("Summination of digit : %d\n",iRet);
   

    return 0;
}