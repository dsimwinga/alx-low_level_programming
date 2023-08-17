#include <stdio.h>

/**
 *main - my main function
 *Return: return 0 at success
 *
 */

int main(void)
{
	long num = 612852475143;
	long lgst_prime = 2;

while (num > 1)

{

	if (num % lgst_prime == 0)
		{
		num /= lgst_prime;
		}

	else
	{
		lgst_prime++;
		printf("%ld\n", lgst_prime);
	}
}
		return (0);
}
