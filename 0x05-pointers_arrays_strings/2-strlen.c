#include "main.h"

/**
 *_strlen - my main function
 *@s: value of an int
 *Return: return 0 at success
 *
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);

}
