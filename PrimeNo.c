#include <stdio.h>

int main() 
{

  int iNo, iCnt, flag = 0;
  printf("Enter a the number: ");
  scanf("%d", &iNo);

  for (iCnt = 2; iCnt <= iNo / 2; iCnt++)
  {
	  if (iNo % iCnt == 0) 
	  {
		  flag = 1;
          break;
      }
  }

  if (flag == 0)
    printf("%d is a prime number.", iNo);
  else
    printf("%d is not a prime number.", iNo);

  return 0;
}