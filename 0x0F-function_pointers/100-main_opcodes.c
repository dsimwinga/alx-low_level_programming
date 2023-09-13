#include<stdio.h>
#include<stdlib.h>
/**
 * main- Entry point
(* a blank line
 *@argc: the number of parameters.
 *@argv: the parameeters in the case the number ob bytes.
* Description: this program prints opcodes in hexa)?
* Return: 0 in succes
*/
int main(int argc, char *argv[])
{
	int j, m;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]);
	if (m < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (j = 0; j < m; j++)
	{
		printf("%02hhx", *((char *)main + j));
		if (j < m - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
