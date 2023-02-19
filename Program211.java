import java.util.*;
class ArrayX
{
    protected int Arr[];
    

    ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    protected void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the "+ Arr.length +" Elements ");
        for(int iCnt = 0; iCnt <Arr.length; iCnt++)
        {
            System.out.println("Enter the Elements no "+(iCnt+1));
            Arr[iCnt] = sobj.nextInt();
        }

    }
    protected void Display()
    {
        System.out.println("Elements of Array are");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]+"\t");
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
    public void Reverse()
    {
        int iStart = 0;
        int iEnd = Arr.length-1;
        int iTemp = 0;

        while(iStart <= iEnd)
        {
            iTemp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = iTemp;

            iStart++;
            iEnd--;
        }
    }
}
class Program211
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Size of Array ");
         
         int iSize = sobj.nextInt();

        MarvellousX  obj = new MarvellousX(iSize);
        obj.Accept();
        obj.Display();
        obj.Reverse();
        System.out.println("Array After Reverse Operation : ");

        obj.Display();

    }
}

