#include<stdio.h>
#include<stdlib.h>

int CheckLastOccurrence(int Arr[],int iSize,int iNo)
{
    int iCnt = 0;

    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == -1)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0;
    int iLength = 0;
    int iRet = 0;
    int iNo = 0;

    printf("Enter the size of array that you want to create:\n");
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
    
    printf("Enter the number to check its last occurrence:\n");
    scanf("%d",&iNo);

    iRet = CheckLastOccurrence(ptr,iLength,iNo);

    if(iRet == -1)
    {
        printf("%d number is not present in array.\n",iNo);
    }
    else
    {
        printf("Last occurrence of %d number is at position %d.\n",iNo,iRet);
    }

    free(ptr);

    return 0;

}