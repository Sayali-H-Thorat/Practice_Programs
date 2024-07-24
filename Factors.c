#include<stdio.h>

void DisplayFactors(int No)
{
    printf("Factors are: \n");

    int iCnt = 0;
    for(iCnt = 1; iCnt <= (No/2); iCnt++)
    {
        if(No % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }

    }



}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the number to find factors :\n");
    scanf("%d", &iNo);

    DisplayFactors(iNo);

    return 0;
}