#include<stdio.h>
#include<stdlib.h>

void DisplayOddEvenSum(int Arr[],int iSize)
{
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenSum = iEvenSum  + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    printf("Summation of all the even elements from an array is : %d\t",iEvenSum);
    printf("Summation of all the odd elements from an array is : %d\t",iOddSum);
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int iCnt = 0;

    printf("Enter the size of array that you want to create:\n");
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

    DisplayOddEvenSum(ptr,iLength);

    free(ptr);

    return 0;

}
