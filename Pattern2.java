//iNo = 5
//Pattern is:
//1       2       3       4       5

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
            System.out.print(iCnt+"\t");
        }
        System.out.println();
    }
}

class Pattern2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        
        System.out.println("Enter the number to print numbers from 1:");
        iNo = sobj.nextInt();

        Pattern pobj = new Pattern(iNo);

        pobj.DisplayPattern();
    }
}