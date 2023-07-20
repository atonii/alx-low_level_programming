#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function name
 * @n: starting point
 * Description: prints from n to 98
 * Return: return nothing
 */

void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		i = n;
		printf("%d", i);
	}
	else if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if ((i > n) && (i <= 98))
				printf(", ");
			printf("%d", i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if ((i < n) && (i >= 98))
				printf(", ");
			printf("%d", i);
		}
	}
	printf("\n");
}
