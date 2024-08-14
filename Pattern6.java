/*
No = 5
Pattern is:
1       2       3       4       5       *       *       *       *       *
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

        if(No < 0)
        {
            No =- No;
        }

        System.out.println("Pattern is:");
        for(iCnt =1; iCnt <= No; iCnt++)
        {
            System.out.print(iCnt+"\t");
        }

        for(iCnt = 1; iCnt <= No; iCnt++)
        {
            System.out.print("*\t");
        }
    }
}

class Pattern6
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;

        System.out.println("Enter the number to first print number and then * pattern on screen :");
        iNo = sobj.nextInt();

        Pattern pobj = new Pattern(iNo);

        pobj.DisplayPattern();
    }
}