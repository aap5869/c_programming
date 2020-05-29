
/* C Programming A Modern Approach
 * Chapter 2
 * Exercise 8
 *
 * Description: Calculates the remaining balance on a loan after the first,
 * second, and third monthly payments
 *
 * Author: Alex Perkins
 * Date: 14-March-2020
 *
 */

#include <stdio.h>

int main(void)
{
	float loan = 0, payment = 0, interestRate = 0; 

	const char* months[3];
	months[0] = "first";
	months[1] = "second";
	months[2] = "third";

	printf("Enter amount of loan: ");
	int result = scanf("%f", &loan);
	if (result != 1)
	{
		return 1;
	}

	printf("Enter interest rate: ");
	result = scanf("%f", &interestRate);
	if (result != 1)
	{
		return 2;
	}

	printf("Enter monthly payment: ");
	result = scanf("%f", &payment);
	if (result != 1)
	{
		return 3;
	}

	for (int i = 0; i < 3; i++)
	{
		loan += (loan * interestRate / 100.0f) / 12.0f;
		loan -= payment;
		printf("Balance remaining after %s payment: %.2f\n", months[i], loan);
	}

	return 0;
}
