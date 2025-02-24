#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle using '#'
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int i, j, spaces;

	if (size > 0)  /* Ensure size is positive */
	{
	for (i = 1; i <= size; i++)  /* Loop for rows */
	{
	for (spaces = size - i; spaces > 0; spaces--)  /* Print spaces */
	{
	_putchar(' ');
	}
	for (j = 0; j < i; j++)  /* Print '#' */
	{
	_putchar('#');
	}
	_putchar('\n');  /* Move to the next line */
	}
	}
	else
	{
	_putchar('\n');  /* Print a newline if size is 0 or less */
	}
}
