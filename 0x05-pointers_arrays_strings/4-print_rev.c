#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: pointer to string
 */

void print_rev(char *s)
{
	int i, count, len;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	len = count;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
