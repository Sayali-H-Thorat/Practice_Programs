//No = 5
//Pattern is:
//5       4       3       2       1

#include<stdio.h>

void DisplayPattern(int iValue)
{
    int iCnt = 0;

    if(iValue < 0)
    {
        iValue =- iValue;
    }

    printf("Pattern is:\n");
    for(iCnt = iValue; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
    }

}

int main()
{
    int iNo = 0;

    printf("Enter the number to print the reverse pattern of numbers:\n");
    scanf("%d",&iNo);

    DisplayPattern(iNo);

    return 0;
}