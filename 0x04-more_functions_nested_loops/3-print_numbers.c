#include "main.h"

/**
 * print_numbers - function name
 * Description: prints from0 - 9
 * Return: returns nothing
 */

void print_numbers(void)
{
	int n;
	
	n = 0;
	while (n < 10)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}
