#include "main.h"

/**
 * print_number -  main function name
 * @n: number to be printed
 * Description: prints the value of n to stdout
 * Return: returns nothing
 */

/**
 * print_up - function for postive prints
 * @a: number to print
 * Description: prints +ve numbers
 * Return: returns nothing
 */

/**
 * print_down - function for -ve prints
 * @b: number to print
 * Description: prints -ve numbers
 * Return: returns nothing
 */

void print_up(int a)
{
	int new_a, multiplier, div_result, extra_zero_del, a_print_count, last_digit;

	last_digit = a % 10;
	a = a / 10;
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
	_putchar('0' + last_digit);
}
void print_up(int a);

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

void print_number(int n)
{
	if (n > 0)
		print_up(n);
	else if (n == 0)
		_putchar('0' + n);
	else
		print_down(n);
}
