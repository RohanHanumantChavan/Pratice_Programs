import java.util.*;
class Pattern
{
    public void Display(int iNo)
    {
        int iDigit = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            System.out.print(iDigit+"\t");
            iNo = iNo / 10;
            
        }
        System.out.println();
        
        
       


    }
}
class Program246
{
    public static void main(String Arg[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number : ");
        int i = sobj.nextInt();


        pobj.Display(i);


    }
}