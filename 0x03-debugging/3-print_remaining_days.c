#include <stdio.h>

/**
 * print_remaining_days - Prints the day of the year and remaining days
 *                       given a date.
 * @month: The month (1-12).
 * @day: The day of the month.
 * @year: The year.
 */
void print_remaining_days(int month, int day, int year)
{
	int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int totalDays = 0;
	int isLeapYear = 0;

	/* Check if it's a leap year */
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		daysInMonth[1] = 29;  /* February has 29 days in a leap year */
		isLeapYear = 1;
	}

	/* Check if the date is valid */
	if (month < 1 || month > 12 || day < 1 || day > daysInMonth[month - 1])
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	/* Calculate the total number of days passed in the year */
	for (int i = 0; i < month - 1; i++)
	{
		totalDays += daysInMonth[i];
	}
	totalDays += day;

	/* Calculate the remaining days */
	int remainingDays = isLeapYear ? 366 - totalDays : 365 - totalDays;

	printf("Day of the year: %d\n", totalDays);
	printf("Remaining days: %d\n", remainingDays);
}
