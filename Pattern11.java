/*
iRow = 5, iCol = 5
Pattern is:
1       1       1       1       1
2       2       2       2       2
3       3       3       3       3
4       4       4       4       4
5       5       5       5       5
*/

import java.util.*;

class Pattern
{
    public int iRow;
    public int iCol;

    public Pattern(int No1,int No2)
    {
        iRow = No1;
        iCol = No2;
    }

    public void DisplayPattern()
    {
        int i = 0;
        int j = 0;

        if(iRow < 0)
        {
            iRow = -iRow;
        }

        if(iCol < 0)
        {
            iCol = -iCol;
        }

        System.out.println("Pattern is:");
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print(i+"\t");
            }
            System.out.println();
        }
    }
}

class Pattern11
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2 = 0;

        System.out.println("Enter number of rows:");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns:");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern(iValue1,iValue2);

        pobj.DisplayPattern();
    }
}