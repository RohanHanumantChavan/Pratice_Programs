import java.util.*;
class MarvellousX
{
    public int CountDigit(String s)
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
class Program230
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        int iRet = 0;
        iRet = obj.CountDigit(str); 

        System.out.println("Count of Digit Are : "+iRet);




    }

        
}

