import java.util.*;

/*
    Input : Hello

    H   e   l   l   o
    H   e   l   l   o
    H   e   l   l   o
    H   e   l   l   o
    H   e   l   l   o  

*/

class Pattern
{
    public void Display(int iNo)
    {
        int iDigit = 0;
        int iTemp1 = iNo;
        int iTemp2 = 0;

        while(iTemp1 != 0)
        {
            while(iTemp2 != 0)
            {
                iDigit = iTemp2 % 10;
                System.out.print(iDigit+"\t");
                iTemp2 = iTemp2/10;
            } 
            iTemp2 = iNo;
            System.out.println();
            iTemp1 = iTemp1 / 10;
        }
        System.out.println();        
    }
}

class Program300
{
    public static void main(String a[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        int i = sobj.nextInt();
        
        pobj.Display(i);
    }
}