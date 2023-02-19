#include<stdio.h>
void EvenOddDigit(int iNo)
{
  
   int iOddCnt = 0;
   int iEvenCnt= 0;
   int iDigit = 0;

    if(iNo == 0)
   {
    printf("Number of Even digit are: 1\n");
     printf("Number of Odd digit are : 0\n");

   }
   if(iNo < 0)
   {
    iNo = -iNo;
   }
   
 while(iNo != 0)
   {
   
   iDigit = iNo % 10;
   if((iDigit % 2)== 0)
    {
        iEvenCnt++;
    }
        
    else
    {
      iOddCnt++;
    }
    iNo = iNo / 10;
    }
    printf("Number of Even digit are : %d\n",iEvenCnt);
     printf("Number of Odddigit are : %d\n",iOddCnt);

}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

     EvenOddDigit(iValue);
   

    return 0;
}