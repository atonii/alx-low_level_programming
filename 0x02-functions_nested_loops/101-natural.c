#include <stdio.h>

/**
 * main - function name
 * Description: Prints sum of multiples of 3 and 5 till 1024
 * Return: returns 0
 */

int main(void)
{
	int n;
	int total;
	int _three;
	int _five;

	total = 0;
	for (n = 0; n < 1024; n++)
	{
		_three = n % 3;
		_five = n % 5;
		if ((_three == 0) || (_five == 0))
			total += n;
		else
			continue;
	}
	printf("%d\n", total);
	return (0);
}
