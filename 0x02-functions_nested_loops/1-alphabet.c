#include "main.h"

/**
 * print_alphabet - function name
 * Description: prints a-z
 * Return: return 0
 */

void print_alphabet(void)
{
	int l;

	for (l = 0; l < 26; l++)
		_putchar('a' + l);
	_putchar('\n');
}
