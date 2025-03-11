#include "main.h"
#include <ctype.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
	{
	i++;
	}

	if (s[i] == '-')
	{
	sign = -1;
	i++;
	}
	else if (s[i] == '+')
	{
	i++;
	}

	while (s[i] != '\0' && isdigit(s[i]))
	{
	result = result * 10 + (s[i] - '0');
	i++;
	}

	return (sign * result);
}
