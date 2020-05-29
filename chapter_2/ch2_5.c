/* C Programming A Modern Approach
 * Chapter 2
 * Exercise 5
 *
 * Description: Asks the user to enter a value for x and then displays the value
 * of the following polynomial: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 *
 * Author: Alex Perkins
 * Date: 14-March-2020
 *
 */

#include <stdio.h>

int main(void)
{
	int x;
	printf("Enter a value for x: ");
	int result = scanf("%d", &x);
	if (result != 1)
	{
		return 1;
	}

	int y = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x +\
			7 * x - 6;

	printf("y = %d\n", y);
	return 0;
}
