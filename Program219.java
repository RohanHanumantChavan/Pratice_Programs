import java.util.*;
class MarvellousX
{
    public int SmallCount(String s)
    { 
        int i = 0;
        for(int iCnt = 0; iCnt < s.length(); iCnt++)
        {
           if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
           {
               i++;
           }
        }
        return i;
        

    }
}
class Program219
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        int iRet = obj.SmallCount(str);
        System.out.println(iRet);

        

        
    }
}