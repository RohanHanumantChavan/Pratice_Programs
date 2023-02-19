import java.util.*;
class Program231
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please Enter String : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }

        //System.out.println("Data is : "+Arr);

        
    }
}

