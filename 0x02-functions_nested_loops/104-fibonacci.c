#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	long int a = 1, b = 2;
	long int high1, high2, low1, low2;
	long int divisor = 1000000000; /* To split large numbers */

	printf("%ld, %ld", a, b);

	for (count = 3; count <= 92; count++) /* First 92 numbers fit in long int */
	{
	long int next = a + b;
	printf(", %ld", next);
	a = b;
	b = next;
	}

	high1 = a / divisor, low1 = a % divisor;
	high2 = b / divisor, low2 = b % divisor;

	for (count = 93; count <= 98; count++)
	{
	long int high_next = high1 + high2;
	long int low_next = low1 + low2;

	if (low_next >= divisor)
	{
	high_next += 1;
	low_next -= divisor;
	}

	printf(", %ld%09ld", high_next, low_next); /* Ensure leading zeros */

	high1 = high2, low1 = low2;
	high2 = high_next, low2 = low_next;
	}

	printf("\n");
	return (0);
}
