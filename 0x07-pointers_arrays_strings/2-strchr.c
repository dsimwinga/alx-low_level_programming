#include "main.h"

/**
 **_strchr - my main function
 *@s: parameter
 *@c: parameter 2
 *Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
