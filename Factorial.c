#include<stdio.h>

int Factorial(int No)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= No; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;

}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the number to find factorial:\n");
    scanf("%d",&iNo);

    iRet = Factorial(iNo);

    printf("Factorial of %d is %d",iNo,iRet);    

    return 0;
}