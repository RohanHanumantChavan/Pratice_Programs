/*


*/
#include<stdio.h>
int CountCapitalR(char *str)
{
    static int iCnt = 0;
    if(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
           iCnt++;
        }
        
        str++;
        CountCapitalR(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Please Enter String : \n ");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapitalR(Arr);
    printf("Count Of Capital Character  is : %d\n",iRet);
     
   
    
    return 0;
}