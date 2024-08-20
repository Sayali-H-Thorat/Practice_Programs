/*
iRow = 5, iCol = 5
Pattern is:
1       *       *       *       *
*       2       *       *       *
*       *       3       *       *
*       *       *       4       *
*       *       *       *       5
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
                if( i == j)
                {
                    System.out.print(i+"\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }
            System.out.println();
        }
    }
}

class Pattern18
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