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

        Scanner sobj = new Scanner(System.in);
        String Query = " ";
        int QuerySize = 0;

        while(true)
        {
            System.out.print("Marvellous DBMS : > ");
            Query = sobj.nextLine();

            String Tokens[] = Query.split(" ");
            QuerySize = Tokens.length;

            if(QuerySize == 1)
            {
                if("help".equals(Tokens[0]))
                {
                    Displayhelp();
                }
                else if("exit".equals(Tokens[0]))
                {
                    System.out.println("Thank you for using our customised DBMS..");
                    break;
                }
                else
                {
                    System.out.println("Command Not Founds !");
                }
            }
            else if(QuerySize == 2)
            {

            }
            else if(QuerySize == 3)
            {

            }
            else if(QuerySize == 4)
            {
                if("select".equals(Tokens[0]))
                {
                    if("*".equals(Tokens[1]))
                    {
                       DisplayAll();
                       
                    }
                    else
                        {
                            System.out.println("No data : ");
                        }
                }
                
                else
                {
                      System.out.println("Command Not Founds..! ");
                }
            }
            else if(QuerySize == 6)
            {
                if("insert".equals(Tokens[0]))
                {
                     System.out.println(" inside insert");

                    if("student".equals(Tokens[2]))
                    {
                        System.out.println(" inside student");

                        Insert(Tokens[4],Integer.parseInt(Tokens[5]));
                    }
                    
                }
               
                else
                {
                    System.out.println("Command Not Founds..! ");
                }
            }
            else if(QuerySize == 8)
            {
                if("select".equals(Tokens[0]))
                {
                
                    if("where".equals(Tokens[4]))
                    {
                         
                        if("rollno".equals(Tokens[5]))
                        {
                             System.out.println("r");
                            DisplaySpecific(Integer.parseInt(Tokens[7]));
                        }
                        else if("sname".equals(Tokens[5]))
                        {
                             System.out.println("sname");
                            DisplaySpecific(Tokens[7]);
                        }
                    }
                    else
                    {
                        System.out.println("Command Not Founds..! ");
                    }
                }
                
            }


        }
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
    public void Sum()
    {
        int iSum = 0;
        for(Student sref : lobj)
        {
            iSum = iSum + (sref.Marks);
        }
        System.out.println("Summation of All Student Marks is : "+iSum);
    }
     public void Avg()
    {
        int iSum = 0;
        for(Student sref : lobj)
        {
            iSum = iSum + (sref.Marks);
        }
        System.out.println("Average Marks is : "+(iSum/ lobj.size()));

    }
    public void Max()
    {
        int iMax = 0;
        for(Student sref : lobj)
        {
            if(iMax < sref.Marks)
            {
                iMax = sref.Marks;
            }
        }
        System.out.println("Maximum Marks Are  : "+iMax);
    }
    public void Min()
    {
        Student s = lobj.get(0);
        
        
         int iMin = s.Marks;
         
        for(Student sref : lobj)
        {
            if(iMin > sref.Marks)
            {
                iMin = sref.Marks;
            }
        }
        System.out.println("Minimum Marks Are  : "+iMin);
    }
    public void Displayhelp()
    {
        System.out.println("Inside Help function ..");
    }
    
    

}
class Program448
{
    public static void main(String arg[])
    {
        DBMS dobj = new DBMS();

        dobj.StartDBMS();

        
        

    }
}