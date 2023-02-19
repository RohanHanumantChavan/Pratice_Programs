import java.util.*;
class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0; 
        int j = 0;
        for( i = 1; i<= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }

    }
}
class Program241
{
    public static void main(String Arg[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of Rows : ");
        int i = sobj.nextInt();

        System.out.println("Enter the Number of Columns : ");
        int j = sobj.nextInt();

        pobj.Display(i,j);


    }
}