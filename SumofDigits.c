#include<stdio.h>

int SumDigits(int No)
{
    int iCnt = 0;
    int iDigit = 0;
    int iSum = 0;

    if(No < 0)
    {
        No =- No;
    }

    while(No != 0)
    {
        iDigit = No %10;
        No = No /10;
        iSum = iSum + iDigit;
    }
    return iSum;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    iRet = SumDigits(iNo);

    printf("Sum of digits from %d number is %d\n",iNo,iRet);

    return 0;
}