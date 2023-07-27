#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: pointer to array
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int array_index;

	array_index = 0;

	while (array_index < n)
	{
		if (array_index > 0)
			printf(", ");
		printf("%d", a[array_index]);
		array_index++;
	}
	printf("\n");
}
