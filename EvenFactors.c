#include<stdio.h>

void DisplayevenFactors(int No)
{
    int iCnt = 0;

    printf("Factors of %d are:\n",No);
    for(iCnt = 1; iCnt <= (No/2); iCnt++)
    {
        if((No % iCnt == 0))
        {
            printf("%d\t",iCnt);
        }
    }
    printf("\n");

    printf("Even factors of %d are:\n",No);
    for(iCnt = 1; iCnt <= (No/2); iCnt++)
    {
        if((No % iCnt == 0) && (iCnt %2 == 0))
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number to find even factors:\n");
    scanf("%d",&iNo);

    DisplayevenFactors(iNo);

    return 0;
}