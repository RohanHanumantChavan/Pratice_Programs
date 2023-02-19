import java.util.*;

class Program430
{
    public static void main(String arg[])
    {
        LinkedList <Integer> obj = new LinkedList();

        obj.add(11);
        obj.addLast(897);
        obj.add(21);
        obj.add(51);
         

         obj.remove(0);
        

        System.out.println("Data is :"+obj);

        for(int no : obj )
        {
            System.out.println(no);
        }
       

    }
}