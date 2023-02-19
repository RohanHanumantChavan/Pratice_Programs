#include<stdio.h>
#include<stdbool.h>
bool Check(char *str, char Ch)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == Ch)
        {
            
            break;
        }
        str++;
    }
    if(*str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
    
    
}

int main()
{
    char Arr[10];
    bool bRet = 0;
    char cValue = '\0';
  
    
    printf("Please Enter String\n");
    scanf("%[^'\n']s",Arr);

   printf("Enter the latter\n");
    scanf(" %c",&cValue);  //space is work
    

    bRet = Check(Arr,cValue);
   if(bRet == true)
   {
      printf("Character is Present in String\n");
   }
   else
   {
       printf("Character is Absent in String\n");
   }
     
     
    return 0;
}