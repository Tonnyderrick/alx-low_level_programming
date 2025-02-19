#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: number to print
 *
 * Description: Handles multiple digits.
 */
void print_number(int n)
{
	if (n / 10)
	print_number(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the times table to print
 *
 * Description: If n is greater than 15 or less than 0, the function does nothing.
 */
void print_times_table(int n)
{
	int row, col, product;

	if (n < 0 || n > 15)
	return;

	for (row = 0; row <= n; row++)
	{
	for (col = 0; col <= n; col++)
	{
	product = row * col;

	if (col != 0) /* Handle spacing and commas */
	{
	_putchar(',');
	_putchar(' ');
	if (product < 10)
	_putchar(' '), _putchar(' '); /* Two spaces for single digits */
	else if (product < 100)
	_putchar(' '); /* One space for double digits */
	}

	print_number(product);
	}
	_putchar('\n');
	}
}
