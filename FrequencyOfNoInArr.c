#include<stdio.h>
#include<stdlib.h>

int CalculateFrequency(int Arr[],int iSize,int No)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            iFrequency++;
        }
    }
    return iFrequency;

}

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int iRet = 0;
    int iNo = 0;
    int *ptr = NULL;

    printf("Enter the size of array that you want to create:\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements of an array:\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of array are:\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }
    printf("\n");

    printf("Enter the number to find the frequency:\n");
    scanf("%d",&iNo);

    iRet = CalculateFrequency(ptr,iLength,iNo);

    printf("Frequency of %d number is :%d\t",iNo,iRet);

    free(ptr);

    return 0;
}