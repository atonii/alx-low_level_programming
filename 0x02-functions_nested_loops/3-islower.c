#include "main.h"

/**
 * _islower - function name
 * @c: letter to be tested
 * Description: checks for lowercase
 * Return: return 1 if lower and 0 otherwise
 */

int _islower(int c)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l == c)
			return (1);
	}
	return (0);
}
