#include "main.h"

/**
 * print_sign - function name
 * @n: number  to be tested
 * Description: checks for numbers
 * Return: return 1 if +ve, 0 if zero -1 if -ve
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
