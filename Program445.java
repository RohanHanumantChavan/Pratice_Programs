import java.util.*;

class Program445
{
    public static void main(String arg[])
    {
        LinkedList <Integer> obj = new LinkedList();

        obj.add(11);
        obj.add(21);
        obj.add(51);
        obj.addFirst(5);
        obj.addLast(101);

        int value = obj.getFirst();
        System.out.println("First Element is : "+value);

         value = obj.getLast();
        System.out.println("Last Element is : "+value);

        obj.removeFirst();
        obj.removeLast();



        System.out.println("Data is : "+obj);

        for(int no : obj)
        {
            System.out.println(no);
        }

        
    }
}