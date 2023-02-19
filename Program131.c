#include<stdio.h>
char CharToggle(char Ch)
{  
    if((Ch >= 'A') && (Ch <= 'Z'))
    {
    return Ch + 32;
    }
     else if((Ch >= 'a') && (Ch <= 'z'))
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

    cRet = CharToggle(CValue);

    printf("Character in the Toggle case is : %c \n",cRet);
}