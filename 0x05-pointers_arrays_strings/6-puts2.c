#include "main.h"

/**
 * puts2 - prints every other char
 * starting with first char
 * @str: pointer to string
 */

void puts2(char *str)
{
	int strlen, new_index;

	strlen = 0;
	new_index = 0;

	while (str[++strlen] != '\0')
		;

	strlen--;

	while (new_index < strlen)
	{
		_putchar(str[new_index]);
		new_index += 2;
	}
	_putchar('\n');

}
