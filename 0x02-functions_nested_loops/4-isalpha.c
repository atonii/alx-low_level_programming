#include "main.h"

/**
 * _isalpha - function name
 * @c: letter to be tested
 * Description: checks for alphabets
 * Return: return 1 if alphabet and 0 otherwise
 */

int _isalpha(int c)
{
	int l;

	for (l = 'A'; l <= 'z'; l++)
	{
		if (l == c)
			return (1);
	}
	return (0);
}
