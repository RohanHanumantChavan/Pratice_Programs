#include<stdio.h>
#include<stdbool.h>

int main()
{
    char Arr[50];
    

    printf("Please Enter Full Name\n");
    //scanf("%s",Arr);
    scanf("%[^'\n']s",Arr);


    printf("Your Name is : %s\n",Arr);

    

   
    

    return 0;
}