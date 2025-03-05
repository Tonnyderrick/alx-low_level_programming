#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @s: The string whose length is to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
	length++;
	}

	return length;
}
