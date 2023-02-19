//problrm statement : accept number from user and check whether it is divisible by 5 or not
//////////////////////////////////////////////////////////////////////////////////////////////
// Algorithm
/////////////////////////////////////////////////////////////

/*
START
Accept number from user as No
Divide that No by and check the value of remainder
if the value is 0
Then display as No is Divisible by 5
Otherwise
Display as No is not divisible by 5

END
*/

////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int DivisibleByFive(int iNo)
{
    int iAns = 0;
    iAns = iNo % 5;

        if(iAns == 0)
     {
        return 1;
     }
        else
     {
        return 0;
     }

     }

///////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iret = DivisibleByFive(iValue);
          if(iret == 0)
    {
        printf("Number is not Divisible",iValue);
    }
         else
    {
        printf("Number is Divisible",iValue);
    }

      return 0;
}