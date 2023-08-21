#include "main.h"

/**
 *_puts - my main function
 *@str: prints a string
 *Return: 0 at success
 */

void _puts(char *str)
{
		int i;

for (i = 0 ; str[i] != '\0' ; i++)
{	_putchar(str[i]);

}
_putchar('\n');
}
