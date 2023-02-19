import java.util.*;
class Program434
{
    public static void main(String Arg[])
    {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Please Enter String : ");
      String str = sobj.nextLine();

      char Arr[] = str.toCharArray();

      HashMap <Character, Integer> hobj = new HashMap();
      int Frequency = 0;

      for(char Ch : Arr)
      {
           if(hobj.containsKey(Ch))
           {
               Frequency = hobj.get(Ch);
               hobj.put(Ch,Frequency+1);
           }
           else
          {
              hobj.put(Ch,1);
          } 
      }
      System.out.println(hobj);
    }
}