/* C Programming A Modern Approach
 * Chapter 6
 * Exercise 2  
 *
 * Asks the user to enter two integers, then calculates and displays their
 * greatest common divisor.
 *
 * Usage:
 * Enter two integers: 12 28
 * Greatest common divisor: 4
 *
 * Author: Alex Perkins
 * Date: 06-September-2020
 */

#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	int_fast16_t userValue1 = 0, userValue2 = 0, remainder = 0;

	printf("Enter two integers: ");
	scanf("%" SCNdFAST16 " %" SCNdFAST16, &userValue1, &userValue2);

	while (userValue2 != 0)
	{
		remainder = userValue1 % userValue2;
		userValue1 = userValue2;
		userValue2 = remainder;
	}

	printf("Greatest common divisor: %" PRIdFAST16"\n", userValue1);

	return 0;
}
