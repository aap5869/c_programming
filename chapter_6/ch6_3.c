/* C Programming A Modern Approach
 * Chapter 6
 * Exercise 3  
 *
 * Asks the user to enter a fraction then reduces the fraction to lowest terms.
 *
 * Usage:
 * Enter a fraction: 6/12
 * In lowest terms: 1/2
 *
 * Author: Alex Perkins
 * Date: 06-September-2020
 */

#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	uint_fast16_t numerator = 0, denominator = 0, gcd = 0, remainder = 0,
				  userValue1 = 0, userValue2 = 0;

	printf("Enter a fraction: ");
	scanf("%" SCNuFAST16 "/%" SCNuFAST16, &userValue1, &userValue2);
	numerator = userValue1;
	denominator = userValue2;

	while (userValue2 != 0)
	{
		remainder = userValue1 % userValue2;
		userValue1 = userValue2;
		userValue2 = remainder;
	}

	gcd = userValue1;
	numerator /= gcd;
	denominator /= gcd;

	printf("In lowest terms: " "%" PRIuFAST16, numerator);
	printf("/%" PRIuFAST16 "\n", denominator);

	return 0;
}
