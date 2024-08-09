#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckOccurrence(int Arr[],int iSize,int No)
{
    int iCnt = 0;
    int iFrequency =0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        // if(Arr[iCnt] == No)
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }
        if(Arr[iCnt] == No)
        {
            iFrequency++;
        }

    }
    if(iFrequency == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iCnt = 0;
    int iLength = 0;
    bool bRet = false;
    int iNo = 0;
    int *ptr = NULL;

    printf("Enter the size of array that you want to create:\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

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

    printf("Enter the number to check whether it is present or not in an array:\n");
    scanf("%d", &iNo);

    bRet = CheckOccurrence(ptr,iLength,iNo);
    if(bRet == true)
    {
        printf("%d number is present in an array.\n",iNo);
    }
    else
    {
        printf("%d number is not present in an array.\n",iNo);
    }

    free(ptr);

    return 0;
}