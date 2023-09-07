#include "main.h"

/**
 *_calloc - my main function
 *@nmemb: element of size
 *@size: size of the memory
 *Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}
