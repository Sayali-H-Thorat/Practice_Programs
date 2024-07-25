#include<stdio.h>

void DisplayNonFactors(int No)
{
    int iCnt = 0;
    
    printf("Non factors of %d is:\n",No);
    for(iCnt=1; iCnt < No; iCnt++)
    {
        if(No % iCnt != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    DisplayNonFactors(iNo);

    return 0;
}