#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;

	return (s);
}
