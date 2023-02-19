import java.util.*;
class Digits
{
    private int CountDigits(int iNo)
    {
        int iCnt = 0;
        while(iNo != 0)
        {
            iCnt++;
            iNo = iNo / 10;
        }
        return iCnt;

    }
    private int power(int Base, int index)
    {
        int iCnt = 0;
        int iAns = 1;
        for(iCnt = 1; iCnt <= index; iCnt++)
        {
            iAns = iAns * Base;
        }
        return iAns;

    }
    public boolean CheckArmstrong(int iNo)
    {
        int iTemp = iNo;
        int iSum = 0;
        int iDigit = 0;
        int iRet = 0;
        int iCount = 0;

        iCount = CountDigits(iNo);

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRet = power(iDigit,iCount);
            iSum = iSum + iRet;

            iNo = iNo / 10;

        }

        if(iSum == iTemp)
        {
            return true;
        }
        else
        {
            return false;
        }

        


    }
}

class  Program207
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        boolean bRet = false;

        System.out.println("Enter the Digit ");
        iNo = sobj.nextInt();

        Digits dobj = new Digits();

        bRet = dobj.CheckArmstrong(iNo);
        if(bRet == true)
        {
           System.out.println(iNo+  " is Armstrong Number ");
        }
        else
        {
            System.out.println(iNo+  " is Not Armstrong Number ");
        }




    }
}
