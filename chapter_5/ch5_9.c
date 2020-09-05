/* C Programming A Modern Approach
 * Chapter 5
 * Exercise 9  
 *
 * Prompts the user to enter two dates and then indicates which date comes
 * earlier on the calendar:
 *
 * Usage:
 * Enter first date (mm/dd/yy) : 3/6/08
 * Enter second date (mm/dd/yy) : 5/17/07
 * 5/17/07 is earlier than 3/6/08
 *
 * Author: Alex Perkins
 * Date: 23-August-2020
 */

#include <stdio.h>

int main(void)
{
    int firstMonth = 0, firstDay = 0, firstYear = 0, secondMonth = 0,
        secondDay = 0, secondYear = 0, whichDate = 0;

    printf("Enter first dat (mm/dd/yy) : ");
    scanf("%d/%d/%d", &firstMonth, &firstDay, &firstYear);

    printf("Enter second date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &secondMonth, &secondDay, &secondYear);

    if (firstYear < secondYear)
        whichDate = 0;
    else
        whichDate = 1;

    if (firstMonth < secondMonth)
        whichDate = 0;
    else
        whichDate = 1;

    if (firstDay < secondMonth)
        whichDate = 0;
    else
        whichDate = 1;

    switch (whichDate)
    {
        case 0:
              printf("%d/%d/%d is earlier than %d/%d/%d\n", firstMonth, firstDay,
                     firstYear, secondMonth, secondDay, secondYear);
              break;
        case 1:
              printf("%d/%d/%d is earlier than %d/%d/%d\n", secondMonth,
                     secondDay, secondYear, firstMonth, firstDay, firstYear);
              break;
    }

    return 0;
}
