#include<stdio.h>
int SumNonFactors(int iNo)
{
  int iCnt = 0;
  int iSum = 0;
  
for(iCnt = 1; iCnt < iNo; iCnt++)
  {
    if((iNo % iCnt) != 0)
    {
     iSum = iSum + iCnt;
    }
    
  }
  return iSum;

}
int main()
{
  int iValue = 0;
  int iRet = 0;


  printf("Enter number :\n");
  scanf("%d",&iValue);

   iRet = SumNonFactors(iValue);
   printf("Summation of Non factors is : %d\n",iRet);
  return 0;
}