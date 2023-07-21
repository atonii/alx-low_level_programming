#include "main.h"

/**
 * more_numbers - function name
 * Description: prints from upto 14 10times
 * Return: returns nothing
 */

void more_numbers(void)
{
	int n, i;

	n = 0;
	while (n < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
		}
		_putchar('\n');
		n++;
	}
}
