/* C Programming A Modern Approach
 * Chapter 3
 * Exercise 4
 *
 * Prompts the user to enter a telephone number in the form (xxx) xxx-xxxx and
 * then displays the number in the form xxx.xxx.xxxx.
 *
 * Author: Alex Perkins
 * Date: 21-March-2020
 *
 */

#include <stdio.h>

int main(void)
{
	int areaCode = 0, firstNum = 0, secondNum = 0;
	
	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	if(scanf("(%d) %d-%d", &areaCode, &firstNum, &secondNum))
	{
		printf("%d.%d.%d\n", areaCode, firstNum, secondNum);
		return 0;
	}

	return 1;
}
