#include "main.h"

/**
 * swap_int - swap integers
 * @a: pointer to 1st parameter
 * @b: pointer to 2nd parameter
 */

void swap_int(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;;
}
