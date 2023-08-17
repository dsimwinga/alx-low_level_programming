#include "main.h"

/**
*_isupper - my main function
*@c: checks is uppercase
*Return: return 1 and 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
