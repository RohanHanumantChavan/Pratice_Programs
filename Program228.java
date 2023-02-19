import java.util.*;
class MarvellousX
{
    public int CountSmallCharacter(String s)
    {
        int i = 0;
        for(int iCnt = 0; iCnt < s.length(); iCnt++)
        {
            if((s.charAt(iCnt) >= 'a') && (s.charAt(iCnt) <= 'z'))
            {
                i++;
            }
           
        }
        return i;
    } 

}
class Program228
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        int iRet = 0;
        iRet = obj.CountSmallCharacter(str); 

        System.out.println("Count of Small Case Latters Are : "+iRet);




    }

        
}

