#include "main.h"

/**
 * leet - encoder
 * @s: string
 * Return: string
 */

char *leet(char *s)
{
	int i, j;

	char c[] = "aeotl";
	char d[] = "AEOTL";
	char k[] = "43071";

	i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == c[j] || s[i] == d[j])
			{
				s[i] = k[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
