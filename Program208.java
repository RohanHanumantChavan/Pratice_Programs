import java.util.*;
class Digits
{
   public boolean CheckArmstrong(int iNo)
   {
    int iCountDigit = 0;
    int iTemp = iNo;
    int iDigit = 0;
    int iSum = 0;
    int iCnt = 0;
    int iPower = 1;


    while(iNo != 0)
   {

    iCountDigit++;
    iNo = iNo / 10;

   } 
   iNo = iTemp;

   while(iNo != 0)
   {
    iDigit = iNo % 10;
    for(iCnt = 1; iCnt <= iCountDigit; iCnt++)
    {
        iPower = iPower * iDigit;
    }
    iSum = iSum + iPower;
    iPower = 1;

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

class  Program208
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
