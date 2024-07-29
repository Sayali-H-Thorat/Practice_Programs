#include<stdio.h>

void DisplayOddFactors(int No)
{
    public
    int iCnt = 0;

    printf("Factors of %d are:\n",No);
    for(iCnt = 1; iCnt <=(No/2);iCnt++)
    {
        if(No % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }
    printf("\n");

    printf("Odd factors of %d are:\n",No);
    for(iCnt = 1; iCnt <= (No/2); iCnt++)
    {
        if((No % iCnt ==0)&&(iCnt %2 != 0))
        {
            printf("%d\t",iCnt);

        }
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number to find odd factors of no:\n");
    scanf("%d", &iNo);

    DisplayOddFactors(iNo);

    return 0;
}