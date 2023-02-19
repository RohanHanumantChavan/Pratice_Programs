/*


*/
#include<stdio.h>
int CountSmallR(char *str)
{
    static int iCnt = 0;
    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
           iCnt++;
        }
        
        str++;
        CountSmallR(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Please Enter String : \n ");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmallR(Arr);
    printf("Count Of Small Character  is : %d\n",iRet);
     
   
    
    return 0;
}