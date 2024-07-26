import java.util.*;

class DisplayTable
{
    public void Table(int No)
    {
        int iCnt = 0;

        System.out.println("Table of "+No+" is:");
        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.println(No*iCnt);
        }
    }
}

class PrintTable
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;

        System.out.println("Enter the number to print table: ");
        iNo = sobj.nextInt();

        DisplayTable dobj = new DisplayTable();

        dobj.Table(iNo);

    }
}