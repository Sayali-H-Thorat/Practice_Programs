#include<stdio.h>

int Summation(int No)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt<=No;iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the number till you want addition:\n");
    scanf("%d",&iNo);

    iRet= Summation(iNo);

    printf("Addition of first %d numbers is %d\n",iNo,iRet);
    
    return 0;
}