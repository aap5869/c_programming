/* C Programming A Modern Approach
 * Chapter 6
 * Exercise 6  
 *
 * Prompts the user to enter a number "n" then prints all even squares between
 * 1 and "n".
 *
 * Author: Alex Perkins
 * Date: 07-September-2020
 */

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main(void)
{
    uint_fast32_t number = 0;
    char          buffer[10]  ={0};
    char          *temp       = NULL;

    printf("Enter a number: ");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
    {
        printf("Could not accept user input\n");
        return 1;
    }

    number = strtol(buffer, &temp, 10);

    if (number % 2 != 0)
        number -= 1;

    for (uint_fast32_t i = 2; (i * i) <= number; i += 2)
    {
        printf("%" PRIuFAST32 "\n", i * i);
    }

    return 0;
}
