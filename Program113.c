#include<stdio.h>
#include<stdbool.h>
bool CheckSmall(char Ch)
{
    if((Ch >= 'A' ) && (Ch <= 'Z'))
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
    if(bRet == false)
    {
        printf("%c is a Capital case letter\n",cValue);
    }
    else
    {
        printf("%c it is not Capital letter \n",cValue);
    }
    

    return 0;
}