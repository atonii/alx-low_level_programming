#include "main.h"

/**
 * print_triangle - function name
 * @size: triangle size
 * Description: print triangle with #
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int i, space, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (space = size - 1; space < size; space--)
			{
				if (space == i)
					break;
				_putchar(' ');
			}
			for (j = 0; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
