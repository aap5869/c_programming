/* C Programming A Modern Approach
 * Chapter 5
 * Exercise 3                                                                    
 *                                                                             
 * Modified version of the broker.c program of Secion 5.2 by making both of the
 * following changes:
 *
 * (a) Asks the user to enter the number of shares and the price per share, 
 * instead of the value of the trade
 *
 * (b) Adds statements that compute the commision charged by a rival broker
 * ($33 plus 3 cents per share for fewer than 2000 shares; $33 plus 2 cents per
 * share for 2000 shares or more). Display the rival's commission as well as the
 * commission charged by the original broker.
 *
 * Author: Alex Perkins
 * Date: 28-May-2020
 */   

#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    uint16_t numShares       = 0;
    float    sharePrice      = 0.0f;
    float    rivalCommission = 0.0f;
    float    origCommission  = 0.0f;
    float    value           = 0.0f;

    printf("Enter the number of shares: ");
    if (scanf("%hu", &numShares) != 1)
        return 1;

    printf("Enter the price per share: ");
    if (scanf("%f", &sharePrice) != 1)
        return 2;

    value = numShares * sharePrice;

    if (value < 2500.00f)
        origCommission = 30.00f + 0.017f * value;
    else if (value < 6250.00f) 
        origCommission = 56.00f + 0.0066f * value;
    else if (value < 20000.00f)
        origCommission = 76.00f + 0.0034f * value;
    else if (value < 50000.00f)
        origCommission = 100.00f + 0.0022f * value;
    else if (value < 500000.00f)
        origCommission = 155.00f + 0.0011f * value;
    else
        origCommission = 255.00f + 0.0009f * value;

    if (origCommission < 39.00f)
        origCommission = 39.00f;

    if (numShares < 2000)
        rivalCommission = 33.00f + 0.03f * numShares;
    else if (numShares >= 2000)
        rivalCommission = 33.00f + 0.02f * numShares;

    printf("Original broker's commission: %.2f\n", origCommission);
    printf("Rival broker's commission: %.2f\n", rivalCommission);

    return 0;
}
