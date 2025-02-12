#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints  alphabets from z to a, followed by a new line.
 * Return: Always 0 (success)
 */

int main(void)

{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
