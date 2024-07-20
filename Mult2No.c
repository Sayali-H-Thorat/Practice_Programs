#include<stdio.h>

int Mult2No(int No1,int No2)
{
    int iResult = 0;

    iResult =No1 * No2;

    return iResult;
}
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;

    printf("Enter vthe first number:\n");
    scanf("%d",&iNo1);

    printf("enter the second number:\n");
    scanf("%d",&iNo2);

    iRet=Mult2No(iNo1,iNo2);

    printf("Multiplication of two numbers is:%d",iRet);

    return 0;
}