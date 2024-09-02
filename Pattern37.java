/*
iRow = 10,iCol = 10
Pattern is:
**********
**      **
* *    * *
*  *  *  *
*   **   *
*   **   *
*  *  *  *
* *    * *
**      **
**********
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

        if(iRow != iCol)
        {
            System.out.println("Number of rows and columns are differrent.");
            return;
        }

        System.out.println("Pattern is:");
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if((i == 1)||(i == iRow)||(i == j)||(j == iRow - i+1)||(j == 1)||(j == iCol))
                {
                    System.out.print("*");
                }
                else
                {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}

class Pattern37
{
    public static void main(String arg[])
    {
        int iValue1 = 0;
        int iValue2 = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows:");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns:");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern(iValue1,iValue2);

        pobj.DisplayPattern();
    }
}