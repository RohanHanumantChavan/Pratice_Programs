#include<stdio.h>
void DisplayTable(int iNo)
{
  int iCnt = 0;
  int iTable = 0;
  printf("Table of %d is :\n",iNo);

  for(iCnt = 1; iCnt <= 10; iCnt++)
  {
     
     printf("%d\n",iNo*iCnt);
    // iTable = iNo * iCnt;
     //printf("%d\n",iTable);
      
  }
 
 }
int main()
{
  int iValue = 0;

  printf("Enter the Number\n");
  scanf("%d",&iValue);

  DisplayTable(iValue);

  return 0;
}