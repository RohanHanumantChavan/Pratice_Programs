import java.util.*;
class Sorting
{
    private int Arr[];

    public Sorting(int Size)
    {
        Arr = new int[Size];
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Elements : ");
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }

    }
    public void Display()
    {
         System.out.println(" Elements of Array Are : ");
        for(int i = 0; i < Arr.length; i++)
        {
           System.out.println(Arr[i]);
        }

    }
}
class Program392
{
    public static void main(String Arg[])
    {
       Scanner sobj = new Scanner(System.in);
       System.out.println("Enter the Size Of Array : ");
       int iSize = sobj.nextInt();

       Sorting obj = new Sorting(iSize);
       obj.Accept();
       obj.Display();

     
 

        
    }
}