#include "main.h"

/**
 *cap_string - Capitalizes the first letter of each word in the given string
 *@str: parameter
 *Return: str
 */
char *cap_string(char *str)
{
	int i;
	int is_new_word = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (is_new_word && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			is_new_word = 0;
		}

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
			str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
			str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}' || is_new_word == 1)
		{
			str[is_new_word] -= 32;
				is_new_word++;
		}
	}
	return (str);
}

