#include<stdio.h>
#include<stdbool.h>

bool DivisibleBy3and5OrNot(int No)
{
    if((No % 5 ==0) && (No % 3 ==0))
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

    bRet=DivisibleBy3and5OrNot(iNo);
    if(bRet == true)
    {
        printf("%d number is divisible by 3 and 5",iNo);
    }
    else
    {
        printf("%d number is not divisible by 3 and 5",iNo);
    }

    return 0;
}