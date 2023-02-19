import java.util.*;
class Program439
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
        System.out.println(hobj);
         
        
       
    }
}