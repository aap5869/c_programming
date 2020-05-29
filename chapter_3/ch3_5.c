/* C Programming A Modern Approach
 * Chapter 3
 * Exercise 5
 *
 * Asks the user to enter the number from 1 to 16 (in any order) and then
 * displays the number in a 4 by 4 arrangement, followed by the sums of the row,
 * columns, and diagonals.
 *
 * Author: Alex Perkins
 * Date: 22-March-2020
 *
 */

#include <stdio.h>

int main(void)
{
	unsigned int nums[4][4]   ={{0, 0, 0, 0},\
							    {0, 0, 0, 0},\
							    {0, 0, 0, 0},\
						        {0, 0, 0, 0}},\
				 rowSum[4]    = {0, 0, 0, 0},\
			     columnSum[4] = {0, 0, 0, 0},\
				 diagSum[2]   = {0, 0};

	printf("Enter the numbers from 1 to 16 in any order: ");
	if(scanf("%u%u%u%u%u%u%u%u%u%u%u%u%u%u%u%u", &nums[0][0],\
												 &nums[0][1],\
												 &nums[0][2],\
												 &nums[0][3],\
												 &nums[1][0],\
												 &nums[1][1],\
												 &nums[1][2],\
												 &nums[1][3],\
												 &nums[2][0],\
												 &nums[2][1],\
												 &nums[2][2],\
												 &nums[2][3],\
												 &nums[3][0],\
												 &nums[3][1],\
												 &nums[3][2],\
												 &nums[3][3]))
	{
		printf("%2d%3d%3d%3d\n"
			   "%2d%3d%3d%3d\n"
			   "%2d%3d%3d%3d\n"
			   "%2d%3d%3d%3d\n", nums[0][0],\
			   					 nums[0][1],\
			   					 nums[0][2],\
			   					 nums[0][3],\
			   					 nums[1][0],\
			   					 nums[1][1],\
			   					 nums[1][2],\
			   					 nums[1][3],\
			   					 nums[2][0],\
			   					 nums[2][1],\
			   					 nums[2][2],\
			   					 nums[2][3],\
			   					 nums[3][0],\
			   					 nums[3][1],\
			   					 nums[3][2],\
			   					 nums[3][3]);
        
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				rowSum[i] += nums[i][j];
			}

			diagSum[0] += nums[i][i];
		}

		for (int j = 0; j < 4; j++)
		{
			for (int i = 0; i < 4; i++)
			{
				columnSum[j] += nums[i][j];
			}

		}
		
		int j = 3;
		for (int i = 0; i < 4; i++)
		{
			diagSum[1] += nums[i][j];
			j--;
		}

		printf("Row sums: %u %u %u %u\n", rowSum[0], rowSum[1], rowSum[2],\
										  rowSum[3]);
		printf("Column sums: %u %u %u %u\n", columnSum[0], columnSum[1],\
											 columnSum[2], columnSum[3]);
		printf("Diagonal sums: %u %u\n", diagSum[0], diagSum[1]);

		return 0;
	}
	return 1;
}
