#include "main.h"

/**
 *malloc_checked - my main function
 *@b: for allocation
 *Return: 0 at success
 */

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);

}
