#include<stdio.h>

void DisplayReverse(int No)
{
    int iCnt = 0;

    printf("Reverse Numbers are:\n");
    for(iCnt = No; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    DisplayReverse(iNo);

    return 0;
}