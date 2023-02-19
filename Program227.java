import java.util.*;
class Program227
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Your Full Name : ");
        String str = sobj.nextLine();

        System.out.println("Welocme "+str);

        for(int i = 0; i < str.length(); i++)
        {
            System.out.println(str.charAt(i));         //using charAt
        }

        
        System.out.println("Number of Character are in String is : "+str.length());

    }
}

