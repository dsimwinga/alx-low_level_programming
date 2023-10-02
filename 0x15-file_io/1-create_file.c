#include "main.h"

/**
*create_file - my main function
*@filename: file name
*@text_content: content
*Return: 1 and 1
*/
int create_file(const char *filename, char *text_content)
{
	int o, w, length = 0;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (o < 0)
		return (-1);

	while (text_content && *(text_content + length))
		length++;

	w = write(o, text_content, length);
	close(o);
	if (w < 0)
		return (-1);
	return (1);
}
