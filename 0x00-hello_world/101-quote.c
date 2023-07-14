#include<stdio.h>
#include<unistd.h>
#include<string.h>

/**
 * main - entry point
 * Description: prints a quote to standard error
 * Return: returns 1
 */

int main(void)
{
	char *text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	const int fd = 2;

	write(fd, text, strlen(text));
	return (1);
}
