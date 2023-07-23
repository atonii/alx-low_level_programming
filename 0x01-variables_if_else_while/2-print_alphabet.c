#include <stdio.h>

/**
 * main - function that prints all lowercase
 * characters using putchar
 * Return: 0;
 */

int main (void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
