#include<stdio.h>
void DisplayNonFactors(int iNo)
{
  int iCnt = 0;
  printf("Non Factors are : \n");

  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
    if((iNo % iCnt)!= 0)
    {
      printf("Non Factor of %d is : %d\n",iNo,iCnt);
      
    }
  }

}
int main()
{
  int iValue = 0;

  printf("Enter number :\n");
  scanf("%d",&iValue);

  DisplayNonFactors(iValue);
  return 0;
}