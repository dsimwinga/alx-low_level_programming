#include "function_pointers.h"

/**
 *int_index - my main function
 *@array: array of a pointer function
 *@size: size of the array function
 *@cmp: pointer to the function
 *Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]) == 1)
			return (j);
	}
	return (-1);
}
