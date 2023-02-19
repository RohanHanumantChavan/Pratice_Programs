import java.util.*;

class Numbers
{
    public void CommonFactorsDisplay(int iNo1, int iNo2)
    {
        int iCnt = 0;
        System.out.println("Common Factor Are : ");
        for(iCnt = 1; (iCnt <=iNo1/2) && (iCnt <= iNo2/2); iCnt++)
        {

        if((iNo1 % iCnt == 0) && (iNo2 % iCnt == 0))
        {
            System.out.println(iCnt);
        }
        
    }
    }

}
class Program194
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo1 = 0;
        int iNo2 = 0;

        System.out.println("Enter First the Number :");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Second the Number :");
        iNo2 = sobj.nextInt();


        Numbers nobj = new Numbers();
        nobj.CommonFactorsDisplay(iNo1, iNo2);

    }
}


