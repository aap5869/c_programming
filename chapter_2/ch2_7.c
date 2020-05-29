/* C Programming A Modern Approach
 * Chapter 2
 * Exercise 7
 *
 * Description: Asks the user to enter a U.S. dollar amount and then shows how
 * to pay that amount using the smallest number of $20, $10, $5, and $1 bills.
 *
 * Author: Alex Perkins
 * Date: 14-March-2020
 *
 */

#include <stdio.h>

int main(void)
{
	unsigned int dollars;

	printf("Enter a dollar amount: ");
	int result = scanf("%u", &dollars);
	if (result != 1)
	{
		return 1;
	}

	unsigned int bill20 = dollars / 20;
	dollars -= bill20 * 20;

	unsigned int bill10 = dollars / 10;
	dollars -= bill10 * 10;

	unsigned int bill5 = dollars / 5;
	dollars -= bill5 * 5;

	unsigned int bill1 = dollars / 1;
	dollars -= bill1;

	printf("$20 bills: %u\n"
		   "$10 bills: %u\n"
		   " $5 bills: %u\n"
		   " $1 bills: %u\n", bill20, bill10, bill5, bill1);	
	return 0;
}
