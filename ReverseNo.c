#include<stdio.h>

int ReverseNumber(int No)
{
    int iDigit = 0;
    int iRev = 0;

    if(No < 0)
    {
        No =- No;
    }

    while(No != 0)
    {
        iDigit = No % 10;
        iRev = (iRev * 10)+iDigit;
        No = No/10;
    }
    return iRev;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    iRet = ReverseNumber(iNo);

    printf("%d number after reversing is : %d\n",iNo,iRet);

    return 0;
}