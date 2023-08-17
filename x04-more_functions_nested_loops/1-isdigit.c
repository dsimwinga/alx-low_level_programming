#include "main.h"

/**
 *_isdigit - my main function
 *@c: checks from 0 through 9
 *Return: return 1 at success and 0 at failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

}
