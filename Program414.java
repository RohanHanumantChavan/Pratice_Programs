import java.util.*;
class Program414
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String");
        String str = sobj.nextLine();

        String data = str.replaceAll("\\s+"," ");

        String newstr = data.trim();  //extra white space

         String Arr[] = newstr.split(" ");



         System.out.println("Number of Words are : "+Arr.length);

    }
}