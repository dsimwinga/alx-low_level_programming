#include "main.h"

/**
 *print_array - my main function
 *@n: intengers
 *@a: pointer
 *Return: 0 at success
 */

void print_array(int *a, int n)
{
		int i;

		for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
printf("\n");
}
