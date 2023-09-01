#include "main.h"

/**
 **_strcpy - my main function
 *@dest: parameter
 *@src: parameter 1
 *Return: 0 at success
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);

}
