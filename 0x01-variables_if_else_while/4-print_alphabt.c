#include <stdio.h>

/**
 * main - function that prints all lowercase
 * except q and e
 * characters using putchar
 * Return: 0;
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		else
			putchar(i);
	}
	putchar('\n');

	return (0);
}
