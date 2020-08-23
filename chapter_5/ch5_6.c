/* C Programming A Modern Approach
 * Chapter 5
 * Exercise 6  
 *
 * Modified version of the upc.c program in Section 4.1 so that it checks
 * whether a PUC is valid. After the user enters a UPC, the program will display
 * VALID or NOT VALID.
 *
 * Author: Alex Perkins
 * Date: 19-August-2020
 */

#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, firstSum, secondSum, 
		    total, checkDigit;

	printf("enter the first (single) digit: ");
	scanf("%1d", &d);
	printf("Enter the first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
	printf("Enter second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
	printf("Enter the last (single) digit: ");
	scanf("%1d", &checkDigit);

	firstSum = d + i2 + i4 + j1 + j3 + j5;
	secondSum = i1 + i3 + i5 + j2 + j4;
	total = 3 * firstSum + secondSum;

	if (9 - ((total - 1) % 10) == checkDigit)
		printf("VALID\n");
	else
		printf("NOT VALID\n");
	return 0;
}
