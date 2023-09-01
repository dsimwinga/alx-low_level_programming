#include <stdio.h>

/**
 *main - print name and a new line
 *@argc: number of command line arguments
 *@argv: array that contaions the command line arguments
 *Return: 0 at success
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
