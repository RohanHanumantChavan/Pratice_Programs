import java.util.*;
class Program437
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter the String ");
        String str = sobj.nextLine();


        char Arr[] = str.toCharArray();

        HashMap <Character, Integer> hobj = new HashMap();
        int Frequency = 0;

        for(char Ch : Arr)
        {
            if(hobj.containsKey(Ch))
            {
                Frequency = hobj.get(Ch);
                hobj.put(Ch,Frequency +1);
            }
            else
            {
                hobj.put(Ch,1);
            }
        }

       
        Set <Character> setobj = hobj.keySet();
        for(char value : setobj)
        {
            System.out.println(value +" occurs "+hobj.get(value)+ " times");
        }
    }
}