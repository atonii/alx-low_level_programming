#include "main.h"

/**
 * puts_half - prints second half of string
 * (length_of_the_string -1) / 2 odd
 * @str: pointer to string
 */

void puts_half(char *str)
{
	int strlen, new_index;

	strlen = 0;
	new_index = 0;

	while (str[strlen++] != '\0')
		;

	strlen--;

	if (strlen % 2 != 0)
	{
		new_index = (strlen - 1) / 2;
		new_index++;
	}
	else
		new_index = strlen / 2;

	while (new_index < strlen)
	{
		_putchar(str[new_index]);
		new_index++;
	}
	_putchar('\n');

}
