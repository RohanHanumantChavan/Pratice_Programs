import java.util.*;
class Student
{
    public String Sname;
    public int Marks;
    public  int Rollno;
    public static int Generator;

    static
    {
        Generator = 0;
    }

    public Student(String str, int no)
    {
        this.Sname = str;
        this.Marks = no;
        Generator++;
        this.Rollno = Generator;
    }
    public void Display()
    {
        System.out.println("Rollno : "+Rollno+" Name : "+Sname+" Marks : "+Marks);
    }

}
class DBMS
{
    public LinkedList <Student> lobj;

    public DBMS()
    {
        lobj = new LinkedList();
    }
    public void StartDBMS()
    {
        System.out.println("Marvellous Customised DBMS started successfully.....");
    }

    // All SQL queries should be implemented here

    // insert into student values(_______, ________);
    public void Insert(String str, int no)
    {
        Student sobj = new Student(str,no);
        lobj.add(sobj);
         

    }

    // select * from student
    public void DisplayAll()
    {
        for(Student sref : lobj)
        {
            sref.Display();
        }
    }
      
     // select * from student where Rollno = 3; 
    public void DisplaySpecific(int value)
    {
        System.out.println();
        System.out.println("Display Specfic Rollno data is :");
        for(Student sref : lobj)
        {
            if(sref.Rollno == value)
            {
                sref.Display();
                break;
            }
        }
    }

     // select * from student where sname = 'Rutuja'; 
    public void DisplaySpecific(String str)
    {
         System.out.println();
        System.out.println("Display Specfic Name data is :");
        for(Student sref : lobj)
        {
            if(str.equals(sref.Sname))
            {
                sref.Display();
                break;
            }
        }
    }

    // delete from student where Rollno = 3
    public void Delete(int no)
    {
        System.out.println();
        int index = 0;
        for(Student sref : lobj)
        {
            if(sref.Rollno == no)
            {
                lobj.remove(index);
                break;
            }
            index++;
        }

    }
    public void Delete(String str)
    {
         System.out.println();
         int index = 0;
         for(Student sref : lobj)
         {
            if(str.equals(sref.Sname))
            {
                lobj.remove(index);
                break;
            }
            index++;
         }

    }
    

}
class Program446
{
    public static void main(String arg[])
    {
        DBMS dobj = new DBMS();

        dobj.StartDBMS();

        dobj.Insert("Kartik",90);
        dobj.Insert("Rutuja",96);
        dobj.Insert("Ankit",80);
        dobj.Insert("Pooja",67);
        dobj.Insert("Ram",91);

        dobj.DisplayAll();
        dobj.DisplaySpecific(3);
        dobj.DisplaySpecific("Rutuja");

        dobj.Delete(3);
        dobj.DisplayAll();

        dobj.Delete("Ram");

        System.out.println("Final data is : ");
        dobj.DisplayAll();

        

    }
}