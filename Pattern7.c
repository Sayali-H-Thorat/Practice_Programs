/*
No = 5
Pattern is:
A       B       C       D       E
*/
#include<stdio.h>

void DisplayPattern(int No)
{
    int iCnt = 0;
    char ch = 'A';

    if(No < 0)
    {
        No = -No;
    }

    printf("Pattern is:\n");
    for(iCnt = 1;iCnt <= No; iCnt++)
    {
        printf("%c\t",ch);
        ch++;

    }
}


int main()
{
    int iNo = 0;

    printf("enter the number to print capital letter pattern on screen:\n");
    scanf("%d",&iNo);

    DisplayPattern(iNo);

    return 0;
}