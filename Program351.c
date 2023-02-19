/*


*/
#include<stdio.h>
int Sum(int Arr[], int size)
{
    static int iCnt = 0;
    static int iSum = 0;
    if(iCnt < size)
    {
        iSum = iSum + Arr[iCnt];
        iCnt++;
        Sum(Arr,size);
    }
    return iSum;
        
    
   
}

int main()
{
    int Brr[5] = {10,20,30,40,50};
    int iRet = 0;
   

    iRet = Sum(Brr,5);
    printf("Addition Of Array is : %d\n",iRet);
    
   
    
    return 0;
}