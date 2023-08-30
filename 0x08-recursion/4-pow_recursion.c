#include "main.h"

/**
 *_pow_recursion - my main function
 *@x: the base
 *@y: the power
 *Return: 0 1 -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
	return (0);
}
