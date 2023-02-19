#include<stdio.h>
char ToLower(char Ch)
{  
    if((Ch >= 'A') && (Ch <= 'Z'))
    {
    return Ch + 32;
    }
    else
    {
        return Ch;
    }
}
int main()
{
    char CValue = '\0';
    char cRet = '\0';

    printf("Enter the Character \n");
    scanf("%c",&CValue);

    cRet = ToLower(CValue);

    printf("Character in the upper case is : %c \n",cRet);
}