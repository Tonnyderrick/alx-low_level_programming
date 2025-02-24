#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - Prints how many days are left in the year,
 * considering leap years.
 * @month: Month in number format
 * @day: Day of the month
 * @year: Year
 */
void print_remaining_days(int month, int day, int year)
{
	int is_leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

	if (is_leap)
	{
	if (month > 2)
	{
	day++;
	}
	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
	if (month == 2 && day == 29)
	{
	printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}
	else
	{
	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", 365 - day);
	}
	}
}
