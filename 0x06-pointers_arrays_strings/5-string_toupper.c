#include "main.h"

/**
 **string_toupper - my main function
 *Return: 0 at success
 *@str: parameter
 *
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
return (str);
}
