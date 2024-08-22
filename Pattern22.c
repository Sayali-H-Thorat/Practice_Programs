/*
iRow = 4,iCol = 4
Pattern is:
&       $       $       $
*       &       $       $
*       *       &       $
*       *       *       &	 
*/

#include<stdio.h>

void DisplayPattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;

    if(iRow != iCol)
    {
        printf("Number of rows and columns are different.\n");
        return;
    }

    printf("Pattern is:\n");
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == j)
            {
                printf("&\t");
            }
            else if(i > j)
            {
                printf("*\t");
            }
            else
            {
                printf("$\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows:\n");
    scanf("%d",&iValue1);

    printf("Enter number of columns:\n");
    scanf("%d",&iValue2);

    DisplayPattern(iValue1,iValue2);

    return 0;
}