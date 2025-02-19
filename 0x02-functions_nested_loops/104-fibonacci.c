#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long a = 1, b = 2, next;
	unsigned long high1, high2, low1, low2;
	unsigned long divisor = 1000000000;

	printf("%lu, %lu", a, b);

	for (count = 3; count <= 92; count++)
	{
	next = a + b;
	printf(", %lu", next);
	a = b;
	b = next;
	}

	high1 = a / divisor, low1 = a % divisor;
	high2 = b / divisor, low2 = b % divisor;

	for (count = 93; count <= 98; count++)
	{
	unsigned long high_next = high1 + high2;
	unsigned long low_next = low1 + low2;

	if (low_next >= divisor)
	{
	high_next += 1;
	low_next -= divisor;
	}

	printf(", %lu%09lu", high_next, low_next);

	high1 = high2, low1 = low2;
	high2 = high_next, low2 = low_next;
	}

	printf("\n");
	return (0);
}
