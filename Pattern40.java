/*
iRow = 10
Pattern is:
*                 *
 *               *
  *             *
   *           *
    *         *
     *       *
      *     *
       *   *
        * *
         *
        * *
       *   *
      *     *
     *       *
    *         *
   *           *
  *             *
 *               *
*                 *
*/

import java.util.*;

class Pattern
{
    public int iRow;

    public Pattern(int No1)
    {
        iRow = No1;
    }

    public void DisplayPattern()
    {
        int i = 0;
        int j = 0;

        int iCol = 2 * iRow-1;

        System.out.println("Pattern is:");
        for(i = 1; i <= iCol; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if((i == j)||(j == iCol-i+1))
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

class Pattern40
{
    public static void main(String arg[])
    {
        int iValue1 = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows:");
        iValue1 = sobj.nextInt();

        Pattern pobj = new Pattern(iValue1);

        pobj.DisplayPattern();
    }
}