#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - my main function
 *Return: 0 at success
 *
 *
 */

int main(void)
{
	int pin[100];
	int g, add, m;

	add = 0;

	srand(time(NULL));

	for (g = 0 ; g < 100 ; g++)
	{
		pin[g] = rand() % 78;
		add += (pin[g] + '0');
		putchar(pin[g] + '0');
		if ((2772 - add) - '0' < 78)
		{
			m = 2772 - add - '0';
			add += m;
			putchar(m + '0');
			break;
		}

	}
return (0);
}
