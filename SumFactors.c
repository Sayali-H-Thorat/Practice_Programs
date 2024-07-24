#include<stdio.h>

int DisplayFactors(int No)
{
    int iCnt = 0;
    int iSum = 0;

    printf("Factors of %d is:",No);

    for(iCnt = 1; iCnt <=(No/2);iCnt++)
    {
        if(No %iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
        
    }
    printf("\n");

    for(iCnt = 1; iCnt <=(No/2);iCnt++)
    {
        if(No % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        
    }
    return iSum;


}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the number to find factors summation:\n");
    scanf("%d",&iNo);

    iRet = DisplayFactors(iNo);

    printf("Sumamtion of factors is %d",iRet);

    return 0;
}