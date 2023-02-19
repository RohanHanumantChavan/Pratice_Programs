import java.util.*;

class Numbers
{
    public int FactorsMultiplication(int iNo)
    {
        int iCnt = 0;
        int iMult = 1;
        for(iCnt = 2; iCnt <=(iNo/2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
               
              iMult = iMult * iCnt;
               

            }
            }
            return iMult;
        }
    }


class Program195
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;

        System.out.println("Enter the Number :");
        iNo = sobj.nextInt();

        Numbers nobj = new Numbers();
        int iRet = nobj.FactorsMultiplication(iNo);
        System.out.println("Multiplication Factors of  "+iNo +" is : "+iRet);
        

    }
}


