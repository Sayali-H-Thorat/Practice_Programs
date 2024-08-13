/*
No = 5
Pattern is:
5       4       3       2       1
*/
import java.util.*;

class Pattern
{
    public int No;

    public Pattern(int iValue)
    {
        No = iValue;
    }

    void DisplayPattern()
    {
        int iCnt = 0;

        if(No < 0)
        {
            No =- No;
        }

        System.out.println("Pattern is:");
        for(iCnt = No; iCnt >= 1; iCnt--)
        {
            System.out.print(iCnt+"\t");
        }
        System.out.println();
    }
}

class Pattern3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;

        System.out.println("Enter the number to print reverse pattern till 1:");
        iNo = sobj.nextInt();

        Pattern pobj = new Pattern(iNo);

        pobj.DisplayPattern();
    }
}
