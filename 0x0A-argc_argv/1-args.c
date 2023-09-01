#include <stdio.h>

/**
 *main - print a number, followed by a new line
 *@argc: number of argument in command line count
 *@argv: vector argument name
 *Return: 0 at success
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
