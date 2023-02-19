import java.util.*;
class Program428
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String");
        String str = sobj.nextLine();

        String data = str.replaceAll("\\s+"," ");

        String newstr = data.trim();

       String Arr[] = newstr.split(" ");

       System.out.println("Number of Words are : "+Arr.length);
    }
}