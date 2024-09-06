#include<stdio.h>

int StrLenX(char *str)
{
    int iCnt = 0, i = 0;

    while(str[i] != '\0')
    {
        iCnt++;
        i++;
    }

    return iCnt;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^'\n]s",Arr);

    iRet = StrLenX(Arr);

    printf("Length of string is:%d",iRet);

    return 0;
}