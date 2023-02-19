#include<stdio.h>
#include<stdbool.h>
bool CheckSmall(char Ch)
{
    if((Ch >= '0' ) && (Ch <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Please Enter one Character\n");
    scanf("%c",&cValue);

    bRet = CheckSmall(cValue);
    if(bRet == true)
    {
        printf("%c it is a Digit\n",cValue);
    }
    else
    {
        printf("%c it is not Digit \n",cValue);
    }
    

    return 0;
}