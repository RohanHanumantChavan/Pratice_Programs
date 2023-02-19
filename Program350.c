/*


*/
#include<stdio.h>
void Display(int Arr[], int size)
{
    static int iCnt = 0;
    if(iCnt < size)
    {
        printf("%d\t",Arr[iCnt]);
        iCnt++;
        Display(Arr,size);
    }
        
    
   
}

int main()
{
    int Brr[5] = {10,20,30,40,50};
   

    Display(Brr,5);
    
   
    
    return 0;
}