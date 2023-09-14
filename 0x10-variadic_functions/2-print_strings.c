#include "variadic_functions.h"

/**
 *print_strings - function to print a string
 *@separator: to separate strings
 *@n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list argu;

	va_start(argu, n);

	for (j = 0; j < n; j++)
	{
		char *x = va_arg(argu, char *);

		if (x == NULL)
			printf("nil");
		else
			printf("%s", x);
		if (separator != NULL && j < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(argu);

}
