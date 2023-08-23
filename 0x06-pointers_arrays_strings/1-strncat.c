#include "main.h"

/**
 **_strncat - my main function
 *@dest: destination
 *@src: source
 *Return: 0 at success
 *@n: n byte
 */

char *_strncat(char *dest, char *src, int n)
{
	int idex = strlen(dest);
	int i;

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[idex + i] = *src;
		src++;
	}
dest[idex + i] = '\0';
return (dest);

}
