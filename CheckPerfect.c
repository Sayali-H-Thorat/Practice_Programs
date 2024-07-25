//6 is a perfect no
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int No)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (No/2); iCnt++)
    {
        if(No % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum==No)
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
    bool bRet =false;

    printf("Enter the number to check whether it is perfect or not:\n");
    scanf("%d",&iNo);

    bRet = CheckPerfect(iNo);
    if(bRet == true)
    {
        printf("%d number is perfect.\n",iNo);
    }
    else
    {
        printf("%d number is not perfect.\n",iNo);
    }

    return 0;
}