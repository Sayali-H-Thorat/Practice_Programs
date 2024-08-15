/* 
No = 5
Pattern is:
a       b       c       d       e
 */

import java.util.*;

class Pattern
{
    public int No;

    public Pattern(int iValue)
    {
        No = iValue;
    }

    public void DisplayPattern()
    {
        int iCnt = 0;
        char ch = 'a';

        if(No < 0)
        {
            No = -No;
        }

        System.out.println("Pattern is:");
        for(iCnt = 1; iCnt <= No; iCnt++)
        {
            System.out.print(ch+"\t");
            ch++;
        }
    }
}

class Pattern8
{
    public static void main(String arg[])
    {
        int iNo = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number to print small letters pattern:");
        iNo = sobj.nextInt();

        Pattern pobj = new Pattern(iNo);

        pobj.DisplayPattern();
    }
}