/* C Programming A Modern Approach
 * Chapter 2
 * Exercise 3
 *
 * Description: Prompts user to enter the radius of a sphere. Computes the 
 * volume of a sphere with the given input.  
 *
 * Author: Alex Perkins
 * Date: 14-March-2020
 *
 */

#include <stdio.h>

int main(void)
{
	printf("Enter the radius of a sphere: ");

	char usrInput[3];
	float radius = 0; 
	if (fgets(usrInput, sizeof(usrInput), stdin))
	{
		if (sscanf(usrInput, "%f", &radius))
		{

			float volume = 4.0f / 3.0f * 3.14f * radius * radius * radius;

			printf("Volume: %.2f\n", volume);
			return 0;
		}

		return 2;
	}

	return 1;
}
