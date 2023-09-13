#include "function_pointers.h"

/**
 *print_name - my mainfuction
 *@name: prints a name
 *@f: pointer function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
