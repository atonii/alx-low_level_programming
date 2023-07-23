#include <stdio.h>

/**
 * main - prints base 16
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 15; num++)
	{
		if (num > 9)
			putchar(num + 87);
		else
			putchar('0' + num);
	}
	putchar('\n');

	return (0);
}
