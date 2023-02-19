import java.util.*;
class Program441
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter the String ");
        String str = sobj.nextLine();


        String Arr[] = str.split(" ");

        HashMap <String, Integer> hobj = new HashMap();
        int Frequency = 0;

        for(String s1 : Arr)
        {
            if(hobj.containsKey(s1))
            {
                Frequency = hobj.get(s1);
                hobj.put(s1,Frequency +1);
            }
            else
            {
                hobj.put(s1,1);
            }
        }
         Set <String> setobj = hobj.keySet();
         int iMax = 0;
         String sMax = " ";

        for(String s1 : setobj)
        {
           if(iMax < hobj.get(s1))
           {
               iMax = hobj.get(s1);
               sMax = s1;
           }
        }
        System.out.println("Maximum times occured Strings is : "+sMax+" with Frequency is : "+iMax);
         
        
       
    }
}