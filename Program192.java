import java.util.*;

class Numbers
{
    public void SumFactorsDisplay(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <=(iNo/2); iCnt++)
        {
            if(((iNo % iCnt) == 0) && ((iCnt % 2) == 0))
            {
               

                System.out.println("Event Factor is : "+iCnt);

                }
            }
        }
    }


class Program192
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;

        System.out.println("Enter the Number :");
        iNo = sobj.nextInt();

        Numbers nobj = new Numbers();
        nobj.SumFactorsDisplay(iNo);

    }
}


