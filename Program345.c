/*


*/
#include<stdio.h>
void DisplayR(char *str)
{
    static int iCnt = 0;
    if(*str != '\0')
    {
       printf("%s\n",str); 
        str++;
        DisplayR(str);
    }
}

int main()
{
    char Arr[20];
   

    printf("Please Enter String : \n ");
    scanf("%[^'\n']s",Arr);

    DisplayR(Arr);
    
   
    
    return 0;
}