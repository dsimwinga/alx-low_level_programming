#include "main.h"

/**
*binary_to_uint - checking the code.
*@b: pointer to the first linked node.
*Return: return 0 or NULL
*/
unsigned int binary_to_uint(const char *b)
{
	int d;
	unsigned int decimalV = 0;

	if (!b)
		return (0);

	for (d = 0; b[d]; d++)
	{
		if (b[d] < '0' || b[d] > '1')
			return (0);
		decimalV = 2 * decimalV + (b[d] - '0');
	}
	return (decimalV);
}
