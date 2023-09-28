#include "main.h"

/**
*set_bit - my main function
*@n: pointer to the first node
*@index: starting from 0
*Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);
return (1);
}
