//iNo = 5
//Pattern is:
//*       *       *       *       *

import java.util.*;

class Pattern
{
    public int iNo;

    public Pattern(int iValue)
    {
        iNo = iValue;
    }

    public void DisplayPattern()
    {
        int iCnt = 0;

        if(iNo < 0)
        {
            iNo =- iNo;
        }

        System.out.println("Pattern is:");

        for(iCnt =1; iCnt <= iNo; iCnt++)
        {
            System.out.print("*\t");
        }
        System.out.println();

    }
}

class Pattern1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;

        System.out.println("Enter the number to print * pattern:");
        iNo = sobj.nextInt();

        Pattern pobj = new Pattern(iNo);

        pobj.DisplayPattern();
    }
}