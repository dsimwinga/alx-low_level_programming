#include "main.h"

/**
 *print_diagsums - my main function
 *@a: parameter 1
 *@size: parameter 2
 *Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i, j = 0, k = 0;

	for (i = 0 ; i < size ; i++)
	{
		j += a[i];
		a += size;
	}
	a -= size;

	for (i = 0 ; i < size ; i++)
	{
		k += a[i];
		a -= size;
	}

	printf("%d, %d\n", j, k);
}
