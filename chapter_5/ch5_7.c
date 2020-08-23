/* C Programming A Modern Approach
 * Chapter 5
 * Exercise 7  
 *
 * Finds the largest and smallest of four integers entered by the user.
 *
 * Usage:
 * Enter four integers: 21 43 10 35
 * Largest: 43
 * Smallest: 10
 *
 * Author: Alex Perkins
 * Date: 19-August-2020
 */

#include <stdio.h>

int main(void)
{
	int numbers[4] = {0}, largest = 0, smallest = 0;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3]);
	largest = numbers[0];
	smallest = numbers[0];

	for (int i = 1; i < 4; i++)
	{
		if (numbers[i] > largest)
			largest = numbers[i];
		if (numbers[i] < smallest)
			smallest = numbers[i];
	}

	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);

	return 0;
}
