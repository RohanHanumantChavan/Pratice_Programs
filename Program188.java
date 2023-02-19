import java.util.*;
class Program188
{

     static int Addition(int i, int j)
        {
            int iSum = 0;
            iSum = i + j;
            return iSum;
        }

    public static void main(String Arg[])
    {
       

        Scanner sobj = new Scanner(System.in);
        int iNo1 = 0;
        int iNo2 = 0;
        int iAns = 0;

        System.out.println("Enter the First Number ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter the First Number ");
        iNo2 = sobj.nextInt();

        iAns = Addition(iNo1,iNo2);

        System.out.println("Addition is :"+iAns);

    }
}