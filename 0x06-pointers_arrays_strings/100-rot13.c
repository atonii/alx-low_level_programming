#include "main.h"

/**
 * rot13 - encoder
 * @s: string
 * Return: string
 */

char *rot13(char *s)
{
	int i, j;

	char c[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz\n"
"ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";

	i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j < 104; j++)
		{
			if (s[i] == c[j])
			{
				s[i] = c[j + 13];
				break;
			}
		}
		i++;
	}
	return (s);
}
