#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0) // Convert to positive if negative
	last_digit *= -1;

	_putchar(last_digit + '0'); // Convert digit to character and print it

	return (last_digit);
}
