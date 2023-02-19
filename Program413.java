import java.util.*;
class Program413
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String");
        String str = sobj.nextLine();

        String newstr = str.trim();  //extra white space

         String Arr[] = newstr.split(" ");



         System.out.println("Number of Words are : "+Arr.length);

    }
}