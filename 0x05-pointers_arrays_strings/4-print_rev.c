#include "main.h"

/**
*print_rev - prints a string in reverse
*@s: counts
*Return: 0 at success
*/

void print_rev(char *s)
{
	int i;
	int count = 0;

for (i = 0 ; s[i] != '\0' ; i++)
	count++;

for (i = count - 1 ; i >= 0 ; i--)
	_putchar(s[i]);
_putchar('\n');
}
