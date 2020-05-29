/* C Programming A Modern Approach
 * Chapter 2
 * Exercise 6
 *
 * Description: Modified version of ch2_5.c using the following polynomial:
 * ((((3x + 2)x - 5)x - 1)x + 7)x - 6
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

	int y = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
	printf("y = %d\n", y);

	return 0;
}
