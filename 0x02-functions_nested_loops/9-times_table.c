#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int row, col, product;

	for (row = 0; row <= 9; row++)
	{
	for (col = 0; col <= 9; col++)
	{
	product = row * col;

	if (col != 0)
	{
	_putchar(',');
	_putchar(' ');
	if (product < 10)
	 _putchar(' '); /* Add extra space for alignment */
	}

	if (product < 10)
	_putchar(product + '0'); /* Print single-digit numbers */
	else
	{
	_putchar((product / 10) + '0'); /* Print first digit */
	_putchar((product % 10) + '0'); /* Print second digit */
	}
	}
	_putchar('\n');
	}
}
