#include <stdio.h>

/**
 * main - function name
 * Description: Prints first 98 fib numbers
 * Return: returns 0
 */

int main(void)
{
	int n;
	long total;
	long first_number;
	long second_number;
	long first_number1;
	long first_number2;
	long second_number1;
	long second_number2;
	long total1;
	long total2;

	first_number = 1;
	second_number = 2;
	total = first_number + second_number;
	printf("%lu, %lu", first_number, second_number);
	for (n = 3; n < 92; n++)
	{
		if (n < 92)
			printf(", ");
		if (n < 92)
		{
			printf("%lu", total);
			first_number = second_number;
			second_number = total;
			total = first_number + second_number;
		}
	}
	first_number1 = first_number / 1000000000;
	first_number2 = first_number % 1000000000;
	second_number1 = second_number / 1000000000;
	second_number2 = second_number % 1000000000;
	total1 = first_number1 + second_number1;
	total2 = first_number2 + second_number2;
	for (n = 92; n < 99; ++n)
	{
		if (n < 99)
			printf(", ");
		printf("%lu%lu", total1, total2);
		first_number1 = second_number1;
		first_number2 = second_number2;
		second_number1 = total1;
		second_number2 = total2;
		total1 = first_number1 + second_number1;
		total2 = first_number2 + second_number2;
	}
	
	printf("\n");
	return (0);
}
