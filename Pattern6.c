/*
No =  5
Pattern is:
1       2       3       4       5       *       *       *       *       *
*/

#include<stdio.h>

void DisplayPattern(int No)
{
    int iCnt =0;

    if(No < 0)
    {
        No =- No;
    }

    printf("Pattern is:\n");
    for(iCnt= 1; iCnt <= No; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    for(iCnt = 1; iCnt <= No; iCnt++)
    {
        printf("*\t");
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number to first print number and then * pattern on screen:\n ");
    scanf("%d",&iNo);

    DisplayPattern(iNo);

    return 0;
}