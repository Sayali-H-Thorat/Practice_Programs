#include<stdio.h>

int CountDigits(int No)
{
    int iDigit = 0;
    int iCnt = 0;

    if(No == 0)
    {
        return 1;
    }

    if(No < 0)
    {
        No =- No;
    }

    while(No != 0)
    {
        iDigit = No % 10;
        No = No/10;
        iCnt++;
    }
    return iCnt;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    iRet = CountDigits(iNo);

    printf("Number of digits in %d number is %d\n",iNo,iRet);

    return 0;
}