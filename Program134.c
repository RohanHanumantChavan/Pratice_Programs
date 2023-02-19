#include<stdio.h>
void strToggle(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        
        str++;
    }
    

}

int main()
{
    char Arr[20];


    printf("Enter the String \n");
    scanf("%[^'\n']s",Arr);

    strToggle(Arr);

    printf("String after conversion is : %s \n",Arr);
    return 0;
}

   