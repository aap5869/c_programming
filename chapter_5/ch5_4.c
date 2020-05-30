/* C Programming A Modern Approach
 * Chapter 5
 * Exercise 4                                                                    
 *                                                                             
 * Asks the user to enter a wind speed (in knots), then displays the 
 * corresponding description.
 *
 * Speed (knots)    Description
 * Less than 1      Calm
 * 1-3              Light air
 * 4-27             Breeze
 * 28-47            Gale
 * 48-63            Storm
 * Above 63         Hurricane
 *
 * Author: Alex Perkins
 * Date: 29-May-2020
 */   

#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    float windSpeed = 0.0f; 

    printf("Enter the wind speed (in knots): ");
    if (scanf("%f", &windSpeed) != 1)
        return 1;

    if (windSpeed < 1.0f)
        printf("Calm\n");
    else if (windSpeed >= 1.0f && windSpeed <= 3.0f)
        printf("Light air\n");
    else if (windSpeed >= 4.0f && windSpeed <= 27.0f)
        printf("Breeze\n");
    else if (windSpeed >= 28.0f && windSpeed <= 47.0f)
        printf("Gale\n");
    else if (windSpeed >= 48.0f && windSpeed <= 63.0f)
        printf("Storm\n");
    else if (windSpeed > 63.0f)
        printf("Hurricane\n");

    return 0;
}
