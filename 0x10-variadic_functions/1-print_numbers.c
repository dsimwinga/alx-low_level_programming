#include "variadic_functions.h"

/**
 *print_numbers - my main function
 *@separator: main separator parameter
 *@n: number of argumeents
 *Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list argu;

	va_start(argu, n);
	for (j = 0; j < n; j++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(argu, int));
			printf("%s", separator);
		}
		else
		printf("%d", va_arg(argu, int));
	}
	putchar('\n');
	va_end(argu);
}
