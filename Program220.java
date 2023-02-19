import java.util.*;
class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the "+Arr.length+" Elements ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter the "+ (iCnt+1) +" Element ");
            Arr[iCnt] = sobj.nextInt();
        }

    }
    public void Display()
    {
        System.out.println("Elements of Array Are : ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]+ "\t");
        }
        System.out.println();

    }
}
class Program220
{
public static void main(String Arg[])
{
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the Size of Array ");
    int iSize = sobj.nextInt();

    ArrayX obj = new ArrayX(iSize);
    obj.Accept();
    obj.Display();

}

}

