#include "main.h"

/**
 *str_concat - my main function
 *@s1: string 1
 *@s2: string 2
 *Return: NULL
 *
 */

char *str_concat(char *s1, char *s2)
{
	int length1 = 0;
	int length2 = 0;
	int i;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0' ; i++)
		length1++;
	for (i = 0 ; s2[i] != '\0' ; i++)
		length2++;

	output = malloc(sizeof(char) * length1 + length2 + 1);

	if (output == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; i++)
		output[i] = s1[i];
	for (i = 0 ; s2[i] != '\0' ; i++)
		output[length1 + i] = s2[i];
	return (output);
}
