import java.util.*;
class ArrayX
{
    protected int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    protected void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the "+Arr.length+" Elements ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter the "+ (iCnt+1) +" Element ");
            Arr[iCnt] = sobj.nextInt();
        }

    }
    protected void Display()
    {
        System.out.println("Elements of Array Are : ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]+ "\t");
        }
        System.out.println();

    }
}
class MarvellousX extends ArrayX
{
    public MarvellousX(int iSize)
    {
        super(iSize);
    }

    public int Addition()
    {
        int iSum = 0;
        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }
}
class Program222
{
public static void main(String Arg[])
{
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the Size of Array ");
    int iSize = sobj.nextInt();

    MarvellousX obj = new MarvellousX(iSize);

    obj.Accept();
    obj.Display();

    int iRet = obj.Addition();
    System.out.println("Summination of All Elements is "+iRet);

}

}

