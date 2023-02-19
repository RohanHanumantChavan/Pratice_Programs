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
     boolean CheckPallindrome()
     {
        int iStart = 0;
        int iEnd = Arr.length-1;
        boolean bFlag = true;

        while(iStart < iEnd)
        {
            if(Arr[iStart] != Arr[iEnd])
            {
                bFlag = false;
                break;
            }
            iStart++;
            iEnd--;
        }
        return bFlag;
     }
    
}
class Program212
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Size of Array ");
         
         int iSize = sobj.nextInt();

        MarvellousX  obj = new MarvellousX(iSize);
        obj.Accept();
        obj.Display();
        

        boolean bRet = obj.CheckPallindrome();
        if(bRet == true)
        {
            System.out.println("Array is Pallindrome ");

        }
        else 
        {
            System.out.println("Array is not Pallindrome ");
        }
    }
}

