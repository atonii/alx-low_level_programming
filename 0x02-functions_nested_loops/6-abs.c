#include "main.h"

/**
 * _abs - function name
 * @n: number  to be tested
 * Description: returns absolute value
 * Return: return abs
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
