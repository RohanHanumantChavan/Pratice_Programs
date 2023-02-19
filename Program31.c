#include<stdio.h>
void DisplayFactors(int iNo)
{
  int iCnt = 0;
  printf(" Factors are : \n");

  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
    if((iNo % iCnt)== 0)
    {
      printf(" Factor of %d is : %d\n",iNo,iCnt);
      
    }
  }

}
int main()
{
  int iValue = 0;

  printf("Enter number :\n");
  scanf("%d",&iValue);

  DisplayFactors(iValue);
  return 0;