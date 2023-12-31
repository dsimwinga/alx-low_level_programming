#include "main.h"

/**
 *array_range - my main function
 *@min: minmum
 *@max: maximum
 *Return: NULL
 */

int *array_range(int min, int max)
{
	int *output;
	int i;
	int size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	output = malloc(sizeof(int) * size);
	if (output == NULL)
		return (NULL);
	for (i = 0 ; min <= max ; i++)
		output[i] = min++;
	return (output);
}
