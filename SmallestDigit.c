#include<stdio.h>

int SmallestDigit(int No)
{
    int iDigit = 0;
    int iMin = 9;

    if(No < 0)
    {
        No =- No;
    }

    while(No != 0)
    {
        iDigit = No % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        No = No / 10;
    }
    return iMin;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    iRet = SmallestDigit(iNo);

    printf("Smallest digit from %d number is: %d\n",iNo,iRet);

    return 0;
}