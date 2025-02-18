#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet 10 times, in lowercase
* followed by a new line.
*/
void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; alphabet[j] != '\0'; j++)
	{
	_putchar(alphabet[j]);
	}
	_putchar('\n');
	}
}
