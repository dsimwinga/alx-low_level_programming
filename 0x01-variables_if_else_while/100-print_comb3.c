#include <stdio.h>
/**
 * main - my main function
 *
 * Return: return 0 at success
 */

int main(void)
{

int b = '0';
int c = '0';

for (c = '0' ; c <= '9' ; c++)
{
	for (b = '0' ; b <= '9' ; b++)
	{
		if (!((b == c) || (c > b)))
		{
		putchar(c);
		putchar(b);
		if (!(b == '9' && c == '8'))
		{
		putchar(',');
		putchar(' ');
		}
		}
	}
}


putchar('\n');
	return (0);
}
