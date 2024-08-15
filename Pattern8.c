/*
No = 5
Pattern is:
a       b       c       d       e
*/

#include<stdio.h>

void DisplayPattern(int No)
{
    int iCnt = 0;
    char ch = 'a';

    if(No <0)
    {
        No = -No;
    }

    printf("Pattern is:\n");
    for(iCnt = 1; iCnt <= No; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number to print small letters pattern:\n");
    scanf("%d",&iNo);

    DisplayPattern(iNo);

    return 0;
}