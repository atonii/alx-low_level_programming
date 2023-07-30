#include "main.h"

/**
 * _strcmp - function that compares strings
 * @s1: first string
 * @s2: second string
 * Return: returns 0 if equal, -15 if s1 < s2 15 if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
<<<<<<< HEAD
		if (s1[i] == s2[i])
		{
			while (s1[i] == s2[i])
			{
				i++;
				if (s1[i] != s2[i])
					break;
			}

		}
		else if (s1[i] < s2[i])
			return (-15);
		else if (s1[i] > s2[i])
			return (15);
=======
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (-13);
			else
				return (13);
		}
		i++;
>>>>>>> 649e10004437a7f4e24119bf137670f3708032e3
	}
	return ((s1[i] > s2[i]) ? 13 : (s1[i] < s2[i]) ? -13 : 0);
}
