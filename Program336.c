/*


*/
#include<stdio.h>
void DisplayFactorsR(int No)
{
    static int iCnt = 1;
    if(iCnt <= (No /2))
    {
        if((No % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
        iCnt++;
        DisplayFactorsR(No);
    }
}
int main()
{
    int Value = 0;
    
    printf("Please Enter Number \n");
    scanf("%d",&Value);

    DisplayFactorsR(Value);
    
   
    
    return 0;
}