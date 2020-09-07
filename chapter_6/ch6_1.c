/* C Programming A Modern Approach
 * Chapter 6
 * Exercise 1  
 *
 * Finds the largest in a seris of numbers entered by the user. When the user
 * enters 0 or a negative number, the program will display the largest
 * nonnegative number entered.
 *
 * Author: Alex Perkins
 * Date: 06-September-2020
 */

#include <stdio.h>

int main(void)
{
	float userNumber = 0.0f, largest = 0.0f;

	do
	{
		printf("Enter a number: ");
		scanf("%f", &userNumber);
		if (userNumber > largest)
			largest = userNumber;
	} while (userNumber > 0);

	printf("The largest number entered was %.2f\n", largest);

	return 0;
}
