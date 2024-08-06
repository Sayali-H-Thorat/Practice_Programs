#include<stdio.h>
#include<stdlib.h>

void CountEvenOdd(int Arr[],int iSize)
{
    int iCnt = 0;
    int iEvenCnt = 0;
    int iOddCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
    }
    printf("Even number count from array is:%d\t\n",iEvenCnt);
    printf("Odd number count from array is:%d\t",iOddCnt);
}

int main()
{
    int *ptr = 0;
    int iCnt = 0;
    int iLength = 0;

    printf("Enter the size of array that you want to create:\n");
    scanf("%d",&iLength);

    ptr=(int *)malloc(iLength*sizeof(int));

    printf("Enter the elements of array:\n");
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

    CountEvenOdd(ptr,iLength);

    free(ptr);

    return 0;
}