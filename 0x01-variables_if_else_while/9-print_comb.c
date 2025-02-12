#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints  alphabets from z to a, followed by a new line.
 * Return: Always 0 (success)
 */

int main(void)

{
	int d;

	for (d = '0';d <= '9'; d++)
	{
	putchar(d);
	if (d != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
