#include<stdio.h>
#include<stdbool.h>

bool DivisibleByFiveOrNot(int No)
{
    int iResult = 0;
    iResult = No % 5;
    if(iResult==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iNo = 0;
    bool bRet = false;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    bRet = DivisibleByFiveOrNot(iNo);
    if(bRet==true)
    {
        printf("%d number is divisible by 5.\n",iNo);
    }
    else
    {
        printf("%d number is not divisible by 5.\n",iNo);
    }

    return 0;
}