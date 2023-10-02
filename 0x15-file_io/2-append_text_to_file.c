#include "main.h"

/**
*append_text_to_file - my main function
*@filename: file name
*@text_content: text
*Return: 1 and -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int e, rs_wr, len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		e = open(filename, O_WRONLY | O_APPEND);
		if (e == -1)
			return (-1);
		len = 0;
		while (*(text_content + len) != '\0')
			len++;
		rs_wr = write(e, text_content, len);
		if (rs_wr == -1)
		{
			close(e);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(e);
	return (1);
}
