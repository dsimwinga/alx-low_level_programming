#include "variadic_functions.h"

/**
 *sum_them_all - sum function
 *@n: number to do the operations on
 *Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
	unsigned int j;
	va_list argu;

	if (n == 0)
		return (0);
	va_start(argu, n);
	for (j = 0; j < n; j++)
	{
		total = total + va_arg(argu, int);
	}
	va_end(argu);
	return (total);
}
