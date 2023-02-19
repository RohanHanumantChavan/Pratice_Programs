import java.util.*;
interface Marvellous
{
    public void BubbleSort();
    public void SelectionSort();
    public void InsertionSort();
}
class Sorting implements Marvellous
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
    public void InsertionSort()
    {
        int i = 0, j = 0, Selected = 0;
        for(i = 1; i < Arr.length; i++)
        {
            for(j = i-1,Selected = Arr[i];(j >= 0) && (Arr[i] > Selected); j--)
            {
                Arr[j+1] = Arr[j];


            }
            Arr[j] = Selected;
        } 

    }
    public void SelectionSort()
    {
        int i = 0, j = 0, min_Index = 0,temp = 0;
        for(i = 0; i < Arr.length-1; i++)
        {
            min_Index = i;
            for( j = 0; j < Arr.length; j++)
            {
                if(Arr[j] < Arr[min_Index])
                {
                    min_Index = j;

                }
            }
            temp = Arr[i];
            Arr[i] = Arr[min_Index];
            Arr[min_Index] = temp;
        }

    }
    public void BubbleSort()
    {
        int i = 0, j = 0, temp = 0;
        boolean flag = false;
        for(i = 0; i < Arr.length; i++)
        {
            flag = false;
            for(j = 0; j < Arr.length-i-1; j++)
            {
                if(Arr[j] < Arr[j+1])
                {
                    temp = Arr[j];
                    Arr[j] = Arr[j+1];
                    Arr[j+1] = temp;
                    flag = true;
                }

            }
            if(flag == false)
            {
                break;
            }
        }

    }
}
class Program394
{
    public static void main(String Arg[])
    {
       Scanner sobj = new Scanner(System.in);
       System.out.println("Enter the Size Of Array : ");
       int iSize = sobj.nextInt();

       Sorting obj = new Sorting(iSize);
       obj.Accept();
       obj.Display();

       obj.BubbleSort();
       obj.Display();

       obj.SelectionSort();
       obj.Display();

       obj.InsertionSort();
       obj.Display();

     
 

        
    }
}