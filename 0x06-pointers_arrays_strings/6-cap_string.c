#include "main.h"

/**
 * cap_string - converts lowercase to uppercase
 * @s: string
 * Return: returns string
 */

char *cap_string(char *s)
{
	int i;

	i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - ('a' - 'A');
	i++;

	while (s[i] != '\0')
	{
		if (s[i] == '\n' || s[i] == '\t'
|| s[i] == '.' || s[i] == '!' || s[i] == '?'
|| s[i] == '"' || s[i] == '(' || s[i] == ')'
|| s[i] == '{' || s[i] == '}' || s[i] == ' '
|| s[i] == ',' || s[i] == ';')
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - ('a' - 'A');
		}
		else
			i++;
	}
	return (s);

}
