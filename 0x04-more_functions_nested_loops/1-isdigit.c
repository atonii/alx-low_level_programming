#include "main.h"

/**
 * _isdigit - function name
 * @c: test case
 * Description: checks digits
 * Return: returns 1 is True and 0 otherwise
 */

int _isdigit(int c)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		if (c == n)
			return (1);
	return (0);
}
