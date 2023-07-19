#include "main.h"

/**
 * print_times_table - function name
 * @n: nth times table
 * Description: prints the n_times table
 * Return: return nothing
 */

void print_times_table(int n)
{
	int rw;
	int col;
	int mult;

	for (rw = 0; rw <= n; rw++)
	{
		if ((n < 0) || (n > 15))
			break;
		for (col = 0; col <= n; col++)
		{
			mult = rw * col;
			if ((col > 0) && (col < n))
				_putchar(',');
			if (col > 0)
				_putchar(' ');
			if (mult > 99)
			{
				_putchar('0' + (mult / 100));
				_putchar('0' + ((mult % 100) / 10));
			}
			else if (mult > 9)
			{
				_putchar(' ');
				_putchar('0' + (mult / 10));
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
			}
			_putchar('0' + (mult % 10));
		}
		_putchar('\n');
	}

}
