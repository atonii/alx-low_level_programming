#include <stdio.h>

/**
 * main - function name
 * Description: Prints sum of even fib numbers < 4000000
 * Return: returns 0
 */

int main(void)
{
	int n;
	long total;
	long first_number;
	long second_number;
	long even_sum;

	first_number = 1;
	second_number = 2;
	total = first_number + second_number;
	even_sum = 2;
	for (n = 3; n < 51; n++)
	{
		if (total % 2 == 0)
			even_sum += total;
		first_number = second_number;
		second_number = total;
		total = first_number + second_number;
	}
	printf("%lu\n", even_sum);
	return (0);
}
