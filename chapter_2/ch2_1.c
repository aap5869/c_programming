/* C Programming A Modern Approach
 * Chapter 2
 * Exercise 1
 *
 * Program prints a checkmark to the command line
 *
 * Author: Alex Perkins
 * Date: 14-Feb-2020
 *
 */
#include <stdio.h>

int main(void)
{
	int k = 7;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < k; j++)
		{
			if (i == 3)
			{
				printf("*   ");
				break;
			}
			
			if (i == 4)
			{
				printf(" * ");
				break;
			}

			if (i == 5)
			{
				printf("  ");
				break;
			}
			printf(" ");
		}
		printf("*\n");
		k -= 1;;
	}
	return 0;
}
