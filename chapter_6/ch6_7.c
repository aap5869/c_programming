/* C Programming A Modern Approach
 * Chapter 6
 * Exercise 7  
 *
 * Modified version of the square3.c program from the chapter so that the for
 * loop initializes i, tests i, and increments i. Multiplications cannot be used
 *
 * Author: Alex Perkins
 * Date: 07-September-2020
 */

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main(void)
{
    uint_fast32_t numEntries  = 0;
    uint_fast32_t square      = 1;
    uint_fast32_t odd         = 3;
    char          buffer[10]  ={0};
    char          *temp       = NULL;

    printf("This program prints a table of squares. \n");
    printf("Enter number of entries in table: ");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
    {
        printf("Could not accept user input\n");
        return 1;
    }

    numEntries = strtol(buffer, &temp, 10);

    for (uint_fast32_t i = 1; i <= numEntries; i++)
    {
        printf("%10" PRIuFAST32 "%10" PRIuFAST32 "\n", i, square);
        odd += 4;
        square += (i + odd);
    }

    return 0;
}
