import java.util.*;
class MarvellousX
{
    public int CountCapitalCharacter(String s)
    {
        int i = 0;
        for(int iCnt = 0; iCnt < s.length(); iCnt++)
        {
            if((s.charAt(iCnt) >= 'A') && (s.charAt(iCnt) <= 'Z'))
            {
                i++;
            }
           
        }
        return i;
    } 

}
class Program229
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        int iRet = 0;
        iRet = obj.CountCapitalCharacter(str); 

        System.out.println("Count of Capital Case Latters Are : "+iRet);




    }

        
}

