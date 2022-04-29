#include <stdio.h>
#include <stdint.h>
#include "string.h"

int main()
{
  int a, b;
  
  printf("Put first number: ");
  scanf("%d", &a);

  printf("Put second number: ");
  scanf("%d", &b);

  int c = a - b;
  if (c < 0)
  {
    c = c * -1;
  }
  
  printf("Sum of the numbers are %d\n", a + b);
  printf("Subract both numbers equal to %d\n", c);

}
