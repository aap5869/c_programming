/* C Programming A Modern Approach
 * Chapter 3
 * Exercise 6
 *
 * Modified version of the addfrac.c program of Section 3.2 so that the user
 * enters both fractions at the same time, separated by a plus sign
 *
 * Author: Alex Perkins
 * Date: 22-March-2020
 *
 */

#include <stdio.h>

int main(void)
{
	int num1        = 0,\
		denom1      = 0,\
		num2        = 0,\
		denom2      = 0,\
		resultNum   = 0,\
		resultDenom = 0;

    printf("Enter two fractions separated by a plus sign: ");
	if(scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2))
	{
		resultNum = num1 * denom2 + num2 * denom1;
		resultDenom = denom1 * denom2;
		printf("The sum is %d/%d\n", resultNum, resultDenom);
		return 0;
	}

	return 1;
}
