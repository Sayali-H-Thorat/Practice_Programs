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
#include<stdio.h>

void DisplayPattern(int iRow)
{
    int i = 0;
    int j = 0;

    int iCol = 2 * iRow -1;

    printf("Pattern is:\n");
    for(i = 1; i <= iCol; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i == j) || (j == iCol-i+1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;

    printf("Enter number of rows:\n");
    scanf("%d", &iValue1);

    DisplayPattern(iValue1);

    return 0;
}