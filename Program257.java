import java.util.*;
class Pattern
{
    public void Display(int irow, int iCol)
    {
        int i = 0, j = 0;
        int iCnt = 1;
        for(i = 1; i <= irow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(iCnt == 10)
                {
                    iCnt = 1;
                }
                System.out.print(iCnt+"\t");
                iCnt++;
            }
            System.out.println();
        }


    }
}
class Program257
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
         System.out.println("Enter the Number of Rows ");
         int i = sobj.nextInt();

         System.out.println("Enter the Number of Colums ");
         int j = sobj.nextInt();
          

        Pattern pobj = new Pattern();
        pobj.Display(i,j);
       
        

    }

}
