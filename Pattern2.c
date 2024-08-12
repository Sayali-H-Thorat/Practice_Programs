//iNo = 5
//Pattern is: 1       2       3       4       5

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
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iNo = 0;

    printf("Enter the number to print number pattern from 1:\n");
    scanf("%d",&iNo);

    DisplayPattern(iNo);

    return 0;
}
