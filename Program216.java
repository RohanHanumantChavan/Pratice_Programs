import java.util.*;
class MarvellousX
{
    public void Display(String s)
    {
        for(int iCnt = 0; iCnt < s.length(); iCnt++)
        {
            System.out.println(s.charAt(iCnt));
        }
        

    }
}
class Program216
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        obj.Display(str);

        

        
    }
}