#include<stdio.h>
#include<limits.h>
#include "main.h"

/**
 * _atoi - function that converts string to int
 * @s: string to be converted
 * Return: returns converted int
 */

int _atoi(char *s)

{
	int sign, i, digit, last;

	i = 0;
	sign = 1;
	digit = 0;
	last = INT_MAX % 10;

	while (s[i] < '0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
			i++;
		}
		else if (s[i] == '+')
		{
			sign *= 1;
			i++;
		}
		else
			i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (digit > INT_MAX / 10 || (digit == INT_MAX / 10 && (s[i] - '0') > last))
				return ((sign == -1) ? INT_MIN : INT_MAX);
			digit = digit * 10 + (s[i] - '0');
			i++;
			if (s[i] == ' ')
				break;
		}

		else
			i++;
	}

	return (sign * digit);
}

