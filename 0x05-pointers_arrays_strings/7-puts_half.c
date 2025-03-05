#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The input string.
 *
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int length = 0, start;

	while (str[length] != '\0')
	{
	length++;
	}

	if (length % 2 == 0)
	start = length / 2;
	else
	start = (length - 1) / 2 + 1;

	while (str[start] != '\0')
	{
	_putchar(str[start]);
	start++;
	}

	_putchar('\n');
}
