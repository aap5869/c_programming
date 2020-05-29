/* C Programming A Modern Approach
 * Chapter 5
 * Exercise 1
 *
 * Calculates how many digits a number contains.
 *
 * Author: Alex Perkins
 * Date: 09-May-2020
 *
 */

#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	uint16_t number    = 0;
	uint8_t  numDigits = 0;

	printf("Enter a number: ");
	if (!scanf("%hu", &number))
	{
		return 1;
	}

	if (number == 0 && number <= 9)
	{
		numDigits = 1;
	}

	else if (number > 9 && number <= 99)
	{
		numDigits = 2;
	}

	else if (number > 99 && number <= 999)
	{
		numDigits = 3;
	}

	else numDigits = 4;

	printf("The number %hu has %hu digits\n", number, numDigits);

	return 0;
}
