/*


*/
#include<stdio.h>
void DisplayFactors(int No)
{
    int iCnt = 1;
    for(iCnt = 1; iCnt <= (No/2); iCnt++)
    {
        if((No % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int Value = 0;
    
    printf("Please Enter Number \n");
    scanf("%d",&Value);

    DisplayFactors(Value);
    
   
    
    return 0;
}