import java.util.*;
class Program215
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Your Full Name : ");
        String str = sobj.nextLine();

        for(int iCnt = 0; iCnt < str.length(); iCnt++)
        {
            System.out.println(str.charAt(iCnt));
        }
        

        
    }
}