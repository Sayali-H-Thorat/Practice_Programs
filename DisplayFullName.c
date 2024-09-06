#include<stdio.h>

int main()
{
    char Arr[50];

    printf("Enter your full name:\n");
    scanf("%[^'\n]s",Arr);

    printf("Hii %s\t",Arr);

    return 0;
}