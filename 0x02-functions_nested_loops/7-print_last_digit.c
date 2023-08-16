#include "main.h"

/**
 *print_last_digit - prints i
 *@g: holds the last digit
 *Return: return m
 */

int print_last_digit(int g)

{
	int m;

	m = g % 10;

if (g < 0)

		m = -m;
	_putchar(m + '0');
		return (m);
		
}
