/* C Programming A Modern Approach
 * Chapter 3
 * Exercise 2
 *
 * This program formats product information entered by the user. 
 *
 * Author: Alex Perkins
 * Date: 21-March-2020
 *
 */

#include <stdio.h>

int main(void)
{
	float unitPrice = 0.0f;
	int itemNum = 0, day = 0, month = 0, year = 0;

	printf("Enter item number: ");
	if(!scanf("%d", &itemNum))
	{
		return 1;
	}

	printf("Enter unit price: ");
	if(!scanf("%f", &unitPrice))
	{
		return 2;
	}

	printf("Enter purchase date mm/dd/yyyy: ");
	if(!scanf("%d/%d/%d", &month, &day, &year))
	{
		return 3;
	}

	printf("Item\tUnit\tPurchase\n"
		   "\tPrice\tDate\n"
		   "%d\t$%.2f\t%d/%d/%d\n", itemNum, unitPrice, month, day, year);

	return 0;
}
