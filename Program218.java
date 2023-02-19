import java.util.*;
class MarvellousX
{
    public int DigitCount(String s)
    { 
        int i = 0;
        for(int iCnt = 0; iCnt < s.length(); iCnt++)
        {
           if((s.charAt(iCnt) >= '0') && (s.charAt(iCnt) <= '9'))
           {
            i++;
           }
        }
        return i;
        

    }
}
class Program218
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        int iRet = obj.DigitCount(str);
        System.out.println(iRet);

        

        
    }
}