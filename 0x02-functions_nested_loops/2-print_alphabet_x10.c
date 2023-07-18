#include "main.h"

/**
 * print_alphabet_x10 - function name
 * Description: prints a-z 10 times
 * Return: return nothing
 */

void print_alphabet_x10(void)
{
	int l;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (l = 0; l < 26; l++)
			_putchar('a' + l);
		_putchar('\n');
	}
}
