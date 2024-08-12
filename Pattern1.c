//iNo = 6
//Pattern is: *       *       *       *       *       *

#include<stdio.h>

void DisplayPattern(int iValue)
{
    int iCnt = 0;

    if(iValue < 0)
    {
        iValue =- iValue;
    }

    printf("Pattern is:\n");
    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{
    int iNo = 0;

    printf("Enter the number to print * :\n");
    scanf("%d",&iNo);

    DisplayPattern(iNo);

    return 0;
}