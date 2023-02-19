import java.util.*;
class Arithematic
{
    public int iValue1;
    public int iValue2;

    public Arithematic(int A, int B)
    {
        iValue1 = A;
        iValue2 = B;
    }
    public int Addition()
    {
        int iSum = 0;
        iSum = iValue1 + iValue2;
        return iSum;
    }
}
class Program201
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo1 = 0,iNo2 = 0;
        int iAns = 0;

        System.out.println("Enter the First Number ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter the second Number ");
        iNo2 = sobj.nextInt();

        Arithematic aobj = new Arithematic(iNo1, iNo2);

        iAns = aobj.Addition();
        System.out.println("Addition is : "+iAns);
    }
}
