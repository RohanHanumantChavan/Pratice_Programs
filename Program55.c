#include<stdio.h>
#include<stdbool.h>
bool CheckPallindrome(int iNo)
{
    
    int iDigit = 0, iRev = 0;
    int iTemp = iNo; 

    
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    if(iRev == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0; 
    bool bRet = false;

    printf("Enter the number \n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);
    if(bRet == true)
    {
        printf(" %d Number is pallindrome : \n",iValue);
    }
    else
    {
        printf("%d number is not pallindrome \n",iValue);  
    }
    

    return 0;
}