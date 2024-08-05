#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}
int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of elements that you want to store in an array:\n");
    scanf("%d",&iLength);

    ptr = (int *) malloc(iLength * sizeof(int));

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

    iRet = Summation(ptr,iLength);
    printf("Summation of Array elements is : %d\n",iRet);

    free(ptr);

    return 0;

}