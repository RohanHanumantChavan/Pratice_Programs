#include<stdio.h>
int CountFrequency(char *str, char Ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == Ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[10];
    int iRet = 0;
    
  
     printf("Please Enter String\n");
    scanf("%[^'\n']s",Arr);

   iRet = CountFrequency(Arr,'a');
    printf("Frequency of latter is : %d\n",iRet);
     
     
    return 0;
}