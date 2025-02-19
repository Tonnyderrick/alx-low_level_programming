#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1, b = 2, next;
	int count;

	printf("%ld, %ld", a, b); /* Print first two numbers */

	for (count = 3; count <= 50; count++)
	{
	next = a + b;
	printf(", %ld", next);
	a = b;
	b = next;
	}

	printf("\n");
	return (0);
}
