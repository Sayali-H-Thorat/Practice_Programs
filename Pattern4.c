/*No = 6
Pattern is:
6
5
4
3
2
1 
*/

#include<stdio.h>

void DisplayPattern(int iValue)
{
    int iCnt = 0;

    if(iValue < 0)
    {
        iValue =- iValue;
    }

    printf("Pattern is:\n");
    for(iCnt = iValue; iCnt >=1; iCnt--)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number to print reverse pattern till 1:\n");
    scanf("%d",&iNo);

    DisplayPattern(iNo);

    return 0;
}