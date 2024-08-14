/*
No = 5
Pattern is:
1        *      2        *      3        *      4        *      5        *
*/

#include<stdio.h>

void DisplayPattern(int No)
{
    int iCnt = 0;

    if(No < 0)
    {
        No =- No;
    }

    printf("Pattern is:\n");
    for(iCnt = 1; iCnt <= No; iCnt++)
    {
        printf("%d\t *\t",iCnt);
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number to print number and star pattern at a time:\n");
    scanf("%d",&iNo);

    DisplayPattern(iNo);

    return 0;
}