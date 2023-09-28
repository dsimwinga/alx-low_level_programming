#include "main.h"

/**
*get_endianness - my main function
*Return: 0 or 1
*/
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);
	return (0);
}
