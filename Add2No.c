#include<stdio.h>

int Add2No(int No1,int No2)
{
    int iResult = 0;

    iResult = No1+ No2;

    return iResult;
}
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;

    printf("Enter the first number:\n");
    scanf("%d",&iNo1);

    printf("Enter the second number:\n");
    scanf("%d",&iNo2);

    iRet= Add2No(iNo1,iNo2);

    printf("Addition of two numbers is:%d\n",iRet);

    return 0;
}