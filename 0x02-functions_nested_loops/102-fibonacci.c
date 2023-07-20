#include <stdio.h>

/**
 * main - function name
 * Description: Prints first 50 fib numbers
 * Return: returns 0
 */

int main(void)
{
	int n;
	long total;
	long first_number;
	long second_number;

	first_number = 1;
	second_number = 2;
	total = first_number + second_number;
	printf("%lu, %lu", first_number, second_number);
	for (n = 3; n < 51; n++)
	{
		if (n < 51)
			printf(", ");
		printf("%lu", total);
		first_number = second_number;
		second_number = total;
		total = first_number + second_number;
	}
	printf("\n");
	return (0);
}
