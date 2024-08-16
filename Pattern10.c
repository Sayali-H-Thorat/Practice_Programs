/*
iRow = 5, iCol = 4
Pattern is:
1       2       3       4
1       2       3       4
1       2       3       4
1       2       3       4
1       2       3       4
*/

#include<stdio.h>

void DisplayPattern(int iRow,int iCol)
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

    printf("Pattern is:\n");
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",j);
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