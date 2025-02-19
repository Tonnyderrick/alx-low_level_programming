#include <stdio.h>

/**
 * main - finds and prints the sum of even Fibonacci numbers <= 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1, b = 2, next;
	long int sum = 2; /* Start with 2 because it's the first even Fibonacci number */

	while (1)
	{
	next = a + b;
	if (next > 4000000)
	break;

	if (next % 2 == 0)
	sum += next;

	a = b;
	b = next;
	}

	printf("%ld\n", sum);
	return (0);
}
