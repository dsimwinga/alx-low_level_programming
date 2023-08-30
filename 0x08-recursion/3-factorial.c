#include "main.h"

/**
 *factorial - my main function
 *@n: factoria
 *Return: factoria
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
