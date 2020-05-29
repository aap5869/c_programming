/* C Programming A Modern Approach
 * Chapter 3
 * Exercise 1
 *
 * This program accepts a date from the user in the form mm/dd/yyyy and then
 * displays it in the form yyyymmdd
 *
 * Author: Alex Perkins
 * Date: 21-March-2020
 *
 */

#include <stdio.h>

int main(void)
{
	int day = 0, month = 0, year = 0;

	printf("Enter a date (mm/dd/yyyy): ");

	if(scanf("%d/%d/%d", &month, &day, &year))
	{
		printf("You entered the date %d%.2d%.2d\n", year, month, day);

		return 0;
	}

	printf("Usage: mm/dd/yyyy");
	return 1;
}
