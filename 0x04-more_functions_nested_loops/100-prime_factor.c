#include <stdio.h>

/**
 * main - function name
 * Description: Prints the Highest prime factor of the multiple
 * Return: returns 0
 */

int main(void)
{
	long test_num, prime, high_prime, div_result;

	test_num = 612852475143;

	for (prime = 2; prime <= test_num; prime++)
	{
		if (test_num % prime == 0)
		{
			div_result = test_num / prime;
			test_num = div_result;
			prime -= 1;
		}
		else
			continue;
	}
	high_prime = prime;
	printf("%lu\n", high_prime);
	return (0);
}
