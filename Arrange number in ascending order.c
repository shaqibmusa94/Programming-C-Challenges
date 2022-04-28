#include <stdio.h>
#include <stdint.h>
#include "string.h"

void checknum(int number, int *numarray, int len);

int main()
{
  int myNum[] = {2, 7, 3, 5, 10, 15};
  int len = sizeof(myNum)/sizeof(int);


  for (int i = 0; i <len; i++)
  {
	  for(int j = 0; j <len; j++)
	  {
		  if(myNum[j] > myNum[j+1])
		  {
			  int temp = myNum[j];
			  myNum[j] = myNum[j+1];
			  myNum[j+1] = temp;
		  }
	  }


  }

  for (int x = 0; x < len; x++)
  {
	  printf("The number is %d\n", myNum[x]);
  }

  return 0;
}
