#include<stdio.h>

void DisplayTable(int No)
{
    int iCnt = 0;

    printf("Table of %d is:\n",No);

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\n",No * iCnt);
    }


}


int main()
{
    int iNo = 0;

    printf("Enter the number to print table:\n");
    scanf("%d",&iNo);

    DisplayTable(iNo);

    return 0;
}