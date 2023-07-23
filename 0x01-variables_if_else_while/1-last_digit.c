#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function for > or < comparison
 * Return: 0
 */

int main(void)
{
	int n, las_dgit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	las_dgit = n % 10;

	if (las_dgit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, las_dgit);
	else if (las_dgit == 0)
		printf("Last digit of %d is %d and is 0\n", n, las_dgit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, las_dgit);

	return (0);
}
