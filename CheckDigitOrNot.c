#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char ch)
{
    if((ch >= '0')&&(ch <= '9'))
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter one digit:\n");
    scanf("%c",&cValue);

    bRet = CheckDigit(cValue);
    if(bRet == true)
    {
        printf("%c number is digit.\n",cValue);
    }
    else
    {
        printf("%c number is not digit.\n",cValue);
    }

    return 0;
}