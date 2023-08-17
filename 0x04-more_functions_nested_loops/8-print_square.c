#include "main.h"

/**
 *print_square - my main function
 *@size: prints the size
 *Return: return 0 at success
 */

void print_square(int size)
{
if (size <= 0)
	_putchar('\n');
else
{
	int i, j;

	for (i = 1 ; i <= size ; i++)
	{
		for (j = 1 ; j <= size ; j++)
			_putchar('#');
		_putchar('\n');
	}

}

}
