/*


*/
#include<stdio.h>
void Display(int Arr[], int size)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < size; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }
   
}

int main()
{
    int Brr[5] = {10,20,30,40,50};
   

    Display(Brr,5);
    
   
    
    return 0;
}