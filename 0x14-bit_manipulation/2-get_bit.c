#include "main.h"

/**
*get_bit - my main function
*@n: integer bit
*@index: starting from 0
*Return: value of index or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);
return (1);
}
