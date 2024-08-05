#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[],int iSize)
{
    int iCnt = 0;
    int iSum = 0;
    float avg = 0.0f;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    avg = iSum / iSize;
    return avg;
    //return (iSum/iSize);
}

int main()
{
    int iCnt = 0;
    int *ptr = NULL;
    int iLength = 0;
    float fRet = 0.0f;

    printf("Enter the number of elements that you want to store in an array:\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the array elements:\n");
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

    fRet = Average(ptr,iLength);

    printf("Average of an array elements is: %f",fRet);

    free(ptr);

    return 0;
}