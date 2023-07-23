#include "main.h"
#include <limits.h>
/**
 * print_up - function name
 * @a: paraneterr
 */

void print_up(int a)
{
	int new_a, multiplier, div_result, extra_zero_del, a_print_count;

	new_a = a;
	multiplier = 1;

	while (new_a > 0)
	{
		multiplier *= 10;
		div_result = new_a / 10;
		new_a = div_result;
	}
	extra_zero_del = multiplier / 10;
	for (a_print_count = 1; a_print_count <= 10 * extra_zero_del; a_print_count++)
	{
		_putchar('0' + (a / extra_zero_del) % 10);
		extra_zero_del = extra_zero_del / 10;
	}
}
void print_up(int a);

/**
 * print_down - function name
 * @b: parameter
 */

void print_down(int b)
{
	int last_digit;

	b += 1;
	b *= -1;
	last_digit = b % 10;
	b = b / 10;

	_putchar('-');
	print_up(b);
	_putchar('0' + (last_digit + 1));
}
void print_down(int b);

/**
 * print_number - function name
 * @n: parameter
 */

void print_number(int n)
{
	int last_digit;

	if ((n > 0) && (n != INT_MAX))
		print_up(n);
	else if (n == INT_MAX)
	{
		last_digit = n % 10;
		n = n / 10;
		print_up(n);
		_putchar('0' + last_digit);
	}
	else if (n == 0)
		_putchar('0' + n);
	else
		print_down(n);
}
