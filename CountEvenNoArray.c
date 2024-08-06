#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iSize)
{
    int iCnt = 0;
    int iEvenCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] %2 == 0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;

}

int main()
{
    int *ptr = NULL;
    int iCnt = 0;
    int iLength = 0;
    int iRet = 0;

    printf("Enter the size of array that you want too create:\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength*sizeof(int));

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

    iRet = CountEven(ptr,iLength);

    printf("Number of even elements are:%d\n",iRet);

    free(ptr);

    return 0;

}