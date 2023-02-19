import java.util.*;
class Digits
{
    private int CountDigits(int iNo)
    {
        int iCnt = 0;
        while(iNo != 0)
        {
            iCnt++;
            iNo = iNo /10;
        }
        return iCnt;

    }
    private int power(int Base, int index)
    {
        int iAns = 1;
        for(int iCnt = 1; iCnt <= index; iCnt++)
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
        int iCount = CountDigits(iNo);
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
class Program196
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;

        System.out.println("Enter the Number :");
        iNo = sobj.nextInt();

        Digits dobj = new Digits();

        boolean bRet = dobj.CheckArmstrong(iNo);
        if(bRet == true)
        {
            System.out.println(iNo+ "is a Armstrong Number ");
        }
        else
        {

             System.out.println(iNo+ "is not a Armstrong Number ");
        }

        
        

    }
}


