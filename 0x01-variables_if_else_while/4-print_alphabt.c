#include <stdio.h>
/**
 * main - my main function
 *
 * Return: return 0 at success
 */

int main(void)
{
char i;

for (i = 'a' ; i <= 'z' ; i++)
	if (i != 'e' && i != 'q')
		putchar(i);
putchar('\n');

return (0);
}
