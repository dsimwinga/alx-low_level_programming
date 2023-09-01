#include <stdio.h>

/**
 *main - prints, including the first one
 *@argc: argument count
 *@argv: vector of an argument
 *Return: 0 at success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
