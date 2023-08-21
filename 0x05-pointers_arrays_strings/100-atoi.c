#include "main.h"

/**
 *_atoi - my main functio
 *@s: parameter
 *Return: m
 */

int _atoi(char *s)
{
	int i = 0, j = 1, p = 0;
	unsigned int m = 0;

	while (s[i])
	{
		if (s[i] == 45)
			j *= -1;
	while (s[i] >= 48 && s[i] <= 57)
	{
		p = 1;
		m = (m * 10) + (s[i] - '0');
		i++;
	}
	if (p == 1)
		break;
	i++;
	}
m *= j;
return (m);
}
