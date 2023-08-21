#include "main.h"

/**
 *swap_int - my main function
 *@a: value 1 of an int
 *@b: value 2 of an int
 *Return: return void
 */

void swap_int(int *a, int *b)
{
	int e;
		e = *a;
		*a = *b;
		*b = e;

}
