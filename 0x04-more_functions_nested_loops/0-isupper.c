#include "main.h"

/**
 * _isupper - function name
 * @c: test case
 * Description: checks if a letter is uppercase
 * Return: returns 1 is True and 0 otherwise
 */

int _isupper(int c)
{
	int l;

	for (l = 'A'; l <= 'Z'; l++)
		if (c == l)
			return (1);
	return (0);
}
