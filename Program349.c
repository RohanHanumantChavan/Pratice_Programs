/*


*/
#include<stdio.h>
void Display(int Arr[], int size)
{
    int iCnt = 0;
    while(iCnt < size)
    {
        printf("%d\t",Arr[iCnt]);
        iCnt++;
    }
        
    
   
}

int main()
{
    int Brr[5] = {10,20,30,40,50};
   

    Display(Brr,5);
    
   
    
    return 0;
}