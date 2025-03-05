#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: The string to print.
 *
 * Return: Nothing.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	putchar(*str);
	str++;
	}
	putchar('\n');
}
