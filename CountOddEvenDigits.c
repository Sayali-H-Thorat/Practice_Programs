#include<stdio.h>

void CountOddEvenDigits(int No)
{
    int iEvenCnt = 0;
    int iOddCnt = 0;
    int iDigit = 0;

    if(No < 0)
    {
        No =- No;
    }

    if(No == 1)
    {
        printf("Count of Even Digits from %d number is : 1\n",No);
        printf("Count of Odd Digits from %d number is : 0\n",No);

        return;
    }

    while(No != 0)
    {
        iDigit = No %10;
        if(iDigit %2 == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
        No = No /10;
    }
    printf("Count of even digits from number is: %d\n",iEvenCnt);
    printf("Count of odd digits from number is : %d\n",iOddCnt);
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    CountOddEvenDigits(iNo);

    return 0;
}