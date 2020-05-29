/* C Programming A Modern Approach
 * Chapter 2
 * Exercise 4
 *
 * Description: Asks the user to enter a dollars-and-cents amount, then displays
 * the amount with 5% tax added.
 *
 * Author: Alex Perkins
 * Date: 14-March-2020
 *
 */

#include <stdio.h>

int main(void)
{
	float money;
	printf("Enter an amount: ");
    int result = scanf("%f", &money);
	if (result != 1)
	{
		return 1;
	}

	money = money + money * 0.05f;
	printf ("With tax added: %.lf\n", money);
	return 0;
}
