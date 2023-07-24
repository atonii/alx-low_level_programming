#include "main.h"

/**
 * _strlen - counts the length of a string
 * @s: pointer to string
 * Return: returns lemgth of string
 */

int _strlen(char *s)
{
	int i, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
