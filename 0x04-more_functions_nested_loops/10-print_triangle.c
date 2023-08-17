#include "main.h"

/**
 *print_triangle - my main function
 *@size: checking for the size
 *Return: return 0 at success
 */

void print_triangle(int size)
{
	int w, z;

if (size <= 0)
{
	_putchar('\n');
}

for (w = 0; w < size; w++)
	{
	for (z = 0; z < size - w - 1; z++)
		_putchar(' ');
	for (z = 0; z < w + 1; z++)
	_putchar('#');
	_putchar('\n');
	}


}
