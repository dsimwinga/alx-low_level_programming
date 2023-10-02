#include "main.h"

int comp_close(int);
/**
*main - my main function
*@argc: argc
*@argv: argument
*Return: 1
*/
int main(int argc, char *argv[])
{
	char buffer[1024];
	int bytesR = 0, e = 1, from = -1, to = -1, err = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	if (from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		comp_close(from);
		exit(99);
	}

	while (e)
	{
		e = read(from, buffer, 1024);
		if (e < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			comp_close(from);
			comp_close(to);
			exit(98);
		}
		else if (e == 0)
			break;
		bytesR += e;
		err = write(to, buffer, e);
		if (err < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			comp_close(from);
			comp_close(to);
			exit(99);
		}
	}
	err = comp_close(to);
	if (err < 0)
	{
		comp_close(from);
		exit(100);
	}
	err = comp_close(from);
	if (err < 0)
		exit(100);
	return (0);
}

/**
*comp_close - sub function
*@description: function description
*Return: err
*/
int comp_close(int description)
{
	int err;

	err = close(description);
	if (err < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", description);
	return (err);
}
