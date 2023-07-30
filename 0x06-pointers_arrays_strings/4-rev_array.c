#include "main.h"

/**
 * reverse_array - reverse function for an array
 * @a: array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int new_index, old_index, temp;
	
	new_index = 0;
	old_index = n - 1;

	while (new_index < old_index)
	{
		temp = a[new_index];
		a[new_index] = a[old_index];
		a[old_index] = temp;
		new_index++;
		old_index--;
	}
}
