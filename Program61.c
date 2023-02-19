#include<stdio.h>
int MimDigit(int iNo)
{
    int iDigit = 0;
    int iMim = 9;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < iMim)
        {
            iMim = iDigit;
        }
       
        iNo = iNo / 10;
    }
    return iMim;

    }
int main()
{
    int iValue = 0; 
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = MimDigit(iValue);
    printf("Smaller Digit is : %d\n",iRet);

   

    return 0;
}