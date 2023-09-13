#include "function_pointers.h"

/**
 *array_iterator - main function
 *@array: array of pointers
 *@size: of pointers
 *@action: to be taken
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;
	for (j = 0; j < size; j++)
		action(array[j]);
}
