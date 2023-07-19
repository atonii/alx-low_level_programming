#include "main.h"
#include <limits.h>

/**
 * print_last_digit - function name
 * @n: number  to be tested
 * Description: prints last digit
 * Return: return last digit
 */

int print_last_digit(int n)
{
	int last_digit;


	if ((n < 0) && (n != INT_MIN))
	{
		n *= -1;
		last_digit = (n % 10);
	}
	else if (n == INT_MIN)
	{
		n += 1;
		n *= -1;
		last_digit = ((n % 10) + 1);
	}
	else
		last_digit = (n % 10);
	_putchar('0' + last_digit);
	return (last_digit);
}
