import java.util.*;

class Student
{
    public String Sname;
    public int Marks;
    public int Rollno;

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
        System.out.println("Roll No : "+Rollno+" Name : "+Sname+" Marks : "+Marks);
    } 
}

class DBMS
{
    public LinkedList <Student> lobj;
    
    public DBMS()
    {
        lobj = new LinkedList();
    }

    public StartDBMS()
    {
        System.out.println("Marvellous Customised DBMS started succesfuliy...");
    }
}

class Program491
{
    public static void main(String Arg[])
    {

    }
}