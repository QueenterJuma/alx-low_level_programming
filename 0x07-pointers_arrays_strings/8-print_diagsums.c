#include "main.h"
#include <stdio.h>

/**
  *print_diagsums - Print the sum of the two digonal of a square.
  *@a: integer
  *@size: size of array
  *
  */

void print_diagsums(int *a, int size)
{
	int sumx, sumy, i, j;

	sumx = 0;
	sumy = 0;
	for (i = 0; i < size * size; i += (size + 1))
	{
		sumx += a[i];
	}
	for (j = size - 1; j < size * size - (size - 1); j += (size - 1))
	{
		sumy += a[j];
	}
	printf("%d, %d\n", sumx, sumy);
}
