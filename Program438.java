import java.util.*;
class Program438cls

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
         int iMax = 0;
         char cMax = ' ';
       
        
        for(char value : setobj)
        {
            if(iMax < hobj.get(value))
            {
                iMax = hobj.get(value);
                cMax = value;
            }
        }
        System.out.println("Maximum times occured character is : "+cMax+" with Frequency is : "+iMax);
        
    }
}