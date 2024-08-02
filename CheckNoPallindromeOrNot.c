#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int No)
{
    int iDigit = 0;
    int iRev = 0;
    int iTemp = No;

    if(No < 0)
    {
        No =- No;
    }

    while(No != 0)
    {
        iDigit = No %10;
        iRev = (iRev * 10) + iDigit;
        No = No/10;
    }
    if(iRev == iTemp)
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

    bRet = CheckPallindrome(iNo);
    if(bRet == true)
    {
        printf("%d number is Pallindrome\n",iNo);
    }
    else
    {
        printf("%d number is not Pallindrome\n",iNo);
    }

    return 0;
}