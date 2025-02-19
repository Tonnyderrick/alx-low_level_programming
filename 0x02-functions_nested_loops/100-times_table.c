#include "main.h"
#include <stdio.h>

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

	if (col == 0)
	printf("%d", product);
	else
	printf(", %3d", product); /* Ensures consistent spacing */
	}
	printf("\n");
	}
}
