import java.util.*;
class Numbers
{
    public void DisplayEvenFactors(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 2; iCnt <= (iNo/2); iCnt+=2)
        {
            if((iNo % iCnt) == 0) 
            {
                System.out.println("Even Factor is : "+iCnt);
            }
        }
    }
   
}
class Program203
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        

        System.out.println("Enter the  Number ");
        iNo = sobj.nextInt();

        Numbers nobj = new Numbers();


        nobj.DisplayEvenFactors(iNo);


      

       
    }
}
