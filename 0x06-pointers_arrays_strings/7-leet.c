#include "main.h"
/**
 **leet - my main function
 *@b: parameter
 *Return: b
 */

char *leet(char *b)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *c = "4433007711";

	for (i = 0 ; b[i] != '\0' ; i++)
	{
		for (j = 0 ; a[j] != '\0' ; j++)
		{
			if (b[i] == a[j])
				b[i] = c[j];
		}
	}
return (b);
}
