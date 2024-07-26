#include<stdio.h>

int DisplayNonFactors(int No)
{
    int iSum = 0;
    int iCnt = 0;

    printf("Non factors of %d no is:\n",No);
    for(iCnt = 1; iCnt < No;iCnt++)
    {
        if(No % iCnt != 0)
        {
            printf("%d\t",iCnt);
        }
    }
    printf("\n");

    for(iCnt = 1; iCnt < No; iCnt++)
    {
        if(No % iCnt != 0)
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

    printf("Enter the number to find sum of non factors:\n");
    scanf("%d",&iNo);

    iRet = DisplayNonFactors(iNo);

    printf("Sum of non factors of %d number is %d \n",iNo,iRet);

    return 0;

}