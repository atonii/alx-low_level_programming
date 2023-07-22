#include "main.h"

/**
 * print_diagonal - function name
 * @n: diagonal length
 * Description: prints n times diagonal with \
 * Return: returns nothing
 */

void print_diagonal(int n)
{
	int i, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (space = 0; space < i; space++)
			{
				if (i == 0)
					break;
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
