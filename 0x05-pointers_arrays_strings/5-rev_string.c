#include "main.h"

/**
 *rev_string - print string in reverse
 *@s: holds the count
 *Return: 0 at success
 */

void rev_string(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = 0 ; i < count / 2 ; i++)
	{
		char f;

		f = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = f;
	}

}
