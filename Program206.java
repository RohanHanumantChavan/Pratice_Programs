import java.util.*;
class Numbers
{
    public int FactorsMultiplication(int iNo)
    {
        int iCnt = 0;
        int iMult = 1;
        for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo % iCnt) == 0) 
            {
                iMult = iMult * iCnt;
            }
        }
        return iMult;
    }
   
}
class Program206
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;
        

        System.out.println("Enter the  Number ");
        iNo = sobj.nextInt();

        Numbers nobj = new Numbers();


        iRet = nobj.FactorsMultiplication(iNo);
        System.out.println("Multiplication of Factors is : "+iRet);
        


      

       
    }
}
