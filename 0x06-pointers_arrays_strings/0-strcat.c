#include "main.h"
#include<stdio.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: returns dest string with '\0'
 */

char *_strcat(char *dest, char *src)
{
	int dest_index, src_index, dest_len, src_len, len;

	dest_len = 0;
	src_len = 0;
	src_index = 0;

	while (dest[++dest_len] != '\0')
	{
		;
	}
	while (src[++src_len] != '\0')
	{
		;
	}
	len = dest_len + src_len;

	dest_index = dest_len;

	while (dest_index <= len)
	{
		dest[dest_index] = src[src_index];
		
		dest_index++;
		src_index++;
	}

	dest[dest_index] = '\0';

	return (dest);
}
