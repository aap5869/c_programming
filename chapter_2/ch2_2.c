/* C Programming A Modern Approach
 * Chapter 2
 * Exercise 2
 *
 * Description: Computes the volume of a sphere with a 10 meter radius
 *
 * Author: Alex Perkins
 * Date: 14-Feb-2020
 *
 */

#include <stdio.h>

int main(void)
{
	float radius = 10.0f;
	float volume = 4.0f/3.0f * 3.14f * radius * radius * radius;

	printf("Volume: %.2f\n", volume);
	return 0;
}
