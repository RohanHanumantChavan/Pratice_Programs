import java.util.*;
class ArrayX
{
    public int Arr[];
    

    ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the "+Arr.length+" Elements ");
        for(int iCnt = 0; iCnt <Arr.length; iCnt++)
        {
            System.out.println("Enter the Elements no "+(iCnt+1));
            Arr[iCnt] = sobj.nextInt();
        }

    }
    public void Display()
    {
        System.out.println("Elements of Array are");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]+"\t");
        }
        System.out.println();

    }
}
class Program209
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