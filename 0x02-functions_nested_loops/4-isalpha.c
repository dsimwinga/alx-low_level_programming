#include "main.h"

/**
 *_isalpha - checking if is a character
 *@c: function parametre
 *Return: return 0 or 1;
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
else
	return (0);


}
