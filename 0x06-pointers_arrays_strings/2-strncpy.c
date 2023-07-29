#include "main.h"
#include<stdio.h>

/**
 * _strncpy - function that copy strings
 * @dest: destination string
 * @src: source string
 * @n: size of src to copy
 * Return: returns dest string with '\0'
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
