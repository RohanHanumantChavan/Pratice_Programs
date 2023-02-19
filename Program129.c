#include<stdio.h>
char ToUpper(char Ch)
{  
    if((Ch >= 'a') && (Ch <= 'z'))
    {
    return Ch - 32;
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

    cRet = ToUpper(CValue);

    printf("Character in the upper case is : %c \n",cRet);
}