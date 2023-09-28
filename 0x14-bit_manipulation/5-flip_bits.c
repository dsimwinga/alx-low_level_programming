#include "main.h"

/**
*flip_bits - my main function
*@n: long int
*@m: long int
*Return: bits at success
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xcluOr = n ^ m, out = 0;

	while (xcluOr > 0)
	{
		out += (xcluOr & 1);
		xcluOr >>= 1;
	}
	return (out);
}
