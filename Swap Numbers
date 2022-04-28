#include <stdio.h>
#include <stdint.h>
#include "string.h"

void ammendName(char *firstName);
void swapNumber(int *a, int *b);

int main()
{
  int x = 5;
  int y = 10;

  swapNumber(&x, &y);

  printf("The number in x is %d\n", x);
  printf("The number in y is %d\n", y);

  return 0;
}

void swapNumber(int *a, int *b)
{
  int c = *a;
  *a = *b;
  *b = c;
}
