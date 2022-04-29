#include <stdio.h>
#include <stdint.h>
#include "string.h"

void ammendName(char *firstName);
void swapNumber(int *a, int *b);

int main()
{
  char *myName = "Shaqib Arsalan bin Musa";
  char mySecondName[] = "Shaqib Arsalan bin Musa";
  char yourName[23] = "Shaqib Arsalan bin Musa";
  char anotherName[100] = "Shaqib Arsalan bin Musa";
  int count = 0;

  printf("Size of array1 is %d\n", strlen(myName));
  printf("Size of array2 is %d\n", strlen(mySecondName));
  printf("Size of array3 is %d\n", strlen(yourName));
  printf("Size of array4 is %d\n", strlen(anotherName));

  printf("Initial address of myName is %p\n", myName);
  printf("The next address of myName is %p\n", myName++);
  printf("The next address of myName is %p\n", myName++);

  printf("Initial address of mySecondName is %p\n", mySecondName);
  printf("The next address of mySecondName is %p\n", mySecondName + 1);

  printf("Initial address of yourName is %p\n", yourName);
  printf("The next address of yourName is %p\n", yourName + 1);

  printf("Initial address of anotherName is %p\n", anotherName);
  printf("The next address of anotherName is %p\n", anotherName + 1);


  printf("Second element in myName is %c\n", *myName++);
  printf("Second element in mySecondName is %c\n", mySecondName[count++]);
  printf("Second element in yourName is %c\n", yourName[count++]);

  printf("Third element in myName is %c\n", *myName++);
  return 0;

}
