#include "main.h"

/**
*read_textfile - my main function
*@filename: file name
*@letters: ltters printed
*Return: eturns the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int n;
	ssize_t d, r;
	char *buf;

	if (!filename)
		return (0);

	n = open(filename, O_RDONLY);
	if (n == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	d = read(n, buf, letters);
	r = write(STDOUT_FILENO, buf, d);

	close(n);
	free(buf);
	return (r);
}
