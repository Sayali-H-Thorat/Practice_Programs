#include<stdio.h>

void Display(int No)
{
    int iCnt = 0;

    iCnt=1;
    while(iCnt <=No)
    {
        printf("Welcome to C programming....\n");
        iCnt++;
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number of iteration:\n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}