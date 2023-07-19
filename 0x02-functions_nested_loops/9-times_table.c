#include "main.h"

/**
 * times_table - function name
 * Description: prints the 9times table
 * Return: return nothing
 */

void times_table(void)
{
	int rw;
	int col;
	int mult;

	for (rw = 0; rw < 10; rw++)
	{
		for (col = 0; col < 10; col++)
		{
			mult = rw * col;
			if ((col > 0) && (col < 10))
				_putchar(',');
			if (mult < 10)
			{
				if (col > 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + mult);
				}
				else
					_putchar('0' + mult);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + (mult / 10));
				_putchar('0' + (mult % 10));
			}
		}
		_putchar('\n');
	}

}
