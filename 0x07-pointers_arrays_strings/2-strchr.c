#include <stdio.h>
#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: input string
 * @c: input character
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
	return (s + i);
	}

	return (NULL);
}
