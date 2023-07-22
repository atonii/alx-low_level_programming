#include "main.h"

/**
 * print_line - function name
 * @n: line length
 * Description: prints n times lines with _
 * Return: returns nothing
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
