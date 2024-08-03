#include<stdio.h>

int LargestDigit(int No)
{
    int iDigit = 0;
    int iMax = 0;

    if(No < 0)
    {
        No =- No;
    }

    while(No != 0)
    {
        iDigit = No % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        if(iMax == 9)
        {
            break;
        }
        No = No / 10;
    }
    return iMax;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    iRet = LargestDigit(iNo);

    printf("Largest digit from %d number is: %d\n",iNo,iRet);

    return 0;

}