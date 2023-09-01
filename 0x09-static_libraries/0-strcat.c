#include "main.h"

/**
 **_strcat - my main function
 *@dest: destination string
 *@src: source string
 *Return: 0 at success
 *
 */

char *_strcat(char *dest, char *src)
{
	int destleng = 0;
	int srcleng = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destleng++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srcleng++;
	for (i = 0 ; i <= srcleng ; i++)
		dest[destleng + i] = src[i];
return (dest);

}
