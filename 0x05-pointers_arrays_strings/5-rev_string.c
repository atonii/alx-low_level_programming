#include "main.h"

/**
 * rev_string - print string in reverse
 * @s: pointer to string
 */

void rev_string(char *s)
{
	int old_index, new_index;
	char temp = 0;

	old_index = 0;
	new_index = 0;

	while (s[++old_index] != '\0')
		;
	old_index--;

	while (new_index < old_index)
	{
		temp = s[new_index];
		s[new_index] = s[old_index];
		s[old_index] = temp;

		new_index++;
		old_index--;
	}

}
