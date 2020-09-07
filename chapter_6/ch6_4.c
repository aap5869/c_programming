/* C Programming A Modern Approach
 * Chapter 6
 * Exercise 4  
 *
 * Modified version of the broker.c program from Section 5.2 so that the user
 * can enter more than one trade and the program will calculate the commission
 * on each. The program will terminate when the user enters 0 as the trade value
 *
 * Usage:
 * Enter value of trade: 30000
 * Commission: $166.00
 *
 * Enter value of trade: 20000
 * Commission: $144.00
 *
 * Enter value of trade: 0
 *
 * Author: Alex Perkins
 * Date: 06-September-2020
 */

#include <stdio.h>

int main(void)
{
	float commission = 0.0f, value = 0.0f;
	do
	{
		printf("Enter value of trade: ");
		scanf("%f", &value);

		if (value == 0.0f)
			break;
		else if (value < 2500.00f)
			commission = 30.00f + 0.017f * value;
		else if (value < 6250.00f)
			commission = 56.00f + 0.0066f * value;
		else if (value < 20000.00f)
			commission = 76.00f + 0.0034f * value;
		else if (value < 50000.00f)
			commission = 100.00f + 0.0022f * value;
		else if (value < 500000.00f)
			commission = 155.00f + 0.0011f * value;
		else
			commission = 255.00f + 0.0009f * value;

		if (commission < 39.00f)
			commission = 39.00f;

		printf("Commission: %.2f\n", commission);
	} while (value != 0.0f);

	return 0;
}
