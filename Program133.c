#include<stdio.h>
void strupr(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    strupr(Arr);

    printf("String after conversion is : %s \n",Arr);
    return 0;
}

   