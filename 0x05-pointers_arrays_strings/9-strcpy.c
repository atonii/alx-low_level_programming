#include "main.h"

/**
 * *_strcpy - copies string from one location to another
 * @dest: destination pointer
 * @src: src pointer
 * Return: return string at dest
 */

char *_strcpy(char *dest, char *src)
{
	int old_index;

	old_index = 0;

	while (src[old_index] != '\0')
	{
		dest[old_index] = src[old_index];
		old_index++;
	}

	dest[old_index] = '\0';

	return (dest);

}
