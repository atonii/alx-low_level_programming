#include <stdio.h>

/**
 * main - function that prints all lowercase in reverse
 * characters using putchar
 * Return: 0;
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');

	return (0);
}
