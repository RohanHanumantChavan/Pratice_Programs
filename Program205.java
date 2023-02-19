import java.util.*;
class Numbers
{
    public void DisplayCommonFactors(int iNo1, int iNo2)
    {
        int iCnt = 0;
        for(iCnt = 1; (iCnt <= iNo1/2) && (iCnt <= iNo2/2); iCnt++)
        {
           if((iNo1 % iCnt == 0) && (iNo2 % iCnt == 0))
           {
                System.out.println("Common Factors is : "+iCnt);

           } 
        }
    }
   
}
class Program205
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo1 = 0, iNo2 = 0;
        

        System.out.println("Enter First the  Number ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Second the  Number ");
        iNo2 = sobj.nextInt();

        Numbers nobj = new Numbers();


        nobj.DisplayCommonFactors(iNo1,iNo2);


      

       
    }
}
