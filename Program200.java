import java.util.*;
class Arithematic
{
    public int Addition(int i, int j)
    {
        int iRet = 0;
        iRet = i + j;
        return iRet;
    }

}
class Program200
{
    
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo1 = 0,iNo2 = 0;
        int iAns = 0;

        System.out.println("Enter the First Number ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter the Second Number ");
        iNo2 = sobj.nextInt();

        Arithematic aobj = new Arithematic();

        iAns = aobj.Addition(iNo1,iNo2);
        System.out.println("Addition is : "+iAns);
    }
}