/* C Programming A Modern Approach
 * Chapter 5
 * Exercise 2                                                                    
 *                                                                             
 *Asks the user for a 24-hour time, then displays the time in 12-hour form.
 * 
 * Author: Alex Perkins
 * Date: 28-May-2020
 */   

#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    uint16_t hour = 0, minute = 0;

    printf("Enter a 24-hour time: ");
    scanf("%hu:%hu", &hour, &minute);

    if(hour > 12)
    {
        hour -= 12;
        printf("Equivalent 12-hour time: %hu:%02hu PM\n", hour, minute);
    }

    else if(hour == 0)
    {
        hour = 12;
        printf("Equivalent 12-hour time: %hu:%02hu AM\n", hour, minute);
    }

    else
    {
        printf("Equivalent 12-hour time: %hu:%02hu AM\n", hour, minute);
    }

    return 0;
}
