#include "main.h"

/**
 *_islower - checks lower characters
 *@c: parametere to be checked
 *Return: return 0 or 1;
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);


}
