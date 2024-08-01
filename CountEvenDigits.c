#include<stdio.h>

int EvenCount(int No)
{
    int iDigit = 0;
    int iEvenCnt = 0;
    
    if(No < 0)
    {
        No =- No;
    }
    if(No ==1)
    {
        return 1;
    }

    while(No != 0)
    {
        iDigit = No % 10;
        if((iDigit %2) == 0)
        {
            iEvenCnt++;
        }
        No = No / 10;
    }
    return iEvenCnt;


}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    iRet = EvenCount(iNo);

    printf("Count of Even digits from %d number is: %d\n",iNo,iRet);

    return 0;
}