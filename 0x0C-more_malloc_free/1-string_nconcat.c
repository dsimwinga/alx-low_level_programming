#include "main.h"

/**
 *string_nconcat - my main function
 *@s1: string 1
 *@s2: string 2
 *@n: pointeer
 *Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int leng1 = 0;
	unsigned int leng2 = 0;
	unsigned int i;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0 ; s1[i] != '\0' ; i++)
		leng1++;
	for (i = 0 ; s2[i] != '\0' ; i++)
		leng2++;

	output = malloc(sizeof(char) * (leng1 + n) + 1);
	if (output == NULL)
		return (NULL);
	if (n >= leng2)
	{
		for (i = 0 ; s1[i] != '\0' ; i++)
			output[i] = s1[i];
		for (i = 0 ; s2[i] != '\0' ; i++)
			output[leng1 + i] = s2[i];
		output[leng1 + i] = '\0';
	}
	else
	{
		for (i = 0 ; s1[i] != '\0' ; i++)
			output[i] = s1[i];
		for (i = 0 ; i < n ; i++)
			output[leng1 + i] = s2[i];
		output[leng1 + i] = '\0';
	}
	return (output);

}
