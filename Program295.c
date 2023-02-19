#include<stdio.h>
int CountOnBits(unsigned int iNo)
{
    int Digit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        Digit = iNo % 2;
        if(Digit == 1)
        {
            iCnt++;
        }
        iNo = iNo / 2;
    }
    return iCnt;
    

}
int main()
{
    unsigned int Value = 0;
    int iRet = 0;
    printf("Please Enter Number : \n");
    scanf("%d",&Value);

    iRet = CountOnBits(Value);
    printf("Number of Bits Which are On is : %d\n",iRet);


    return 0;
}