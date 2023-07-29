#include "main.h"
#include<stdio.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: size of src
 * Return: returns dest string with '\0'
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_index, dest_len, i;

	dest_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	dest_index = dest_len;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_index + i] = src[i];

	dest[dest_index + i] = '\0';

	return (dest);
}
