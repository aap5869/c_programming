/* C Programming A Modern Approach
 * Chapter 5
 * Exercise 11  
 *
 * Asks the user for a two-digit number, then prints the English word for the
 * number
 *
 * Usage:
 * Enter a two-digit number: 45
 * You entered the number forty-five
 *
 * Author: Alex Perkins
 * Date: 05-September-2020
 */

#include <stdio.h>
#include <inttypes.h>
#include <string.h>

int main(void)
{
    uint_fast8_t number = 0, tensPlace = 0, onesPlace = 0;
    char tensPlaceWord[10];
    char onesPlaceWord[10];

    char tensPlaceList[][8] = {"twenty", "thirty", "forty", "fifty", "sixty",
                               "seventy", "eighty", "ninety"};
    char onesPlaceList[][9] = {"-one", "-two", "-three", "-four", "-five", 
                               "-six", "-seven", "-eight", "-nine"};

    printf("Enter a two-digit number: ");
    scanf("%" SCNuFAST8, &number);

    tensPlace = number / 10;
    onesPlace = number % 10;

    if (number > 10 && number < 20)
    {
        switch (onesPlace)
        {
            case 1:
                printf("You entered the number eleven\n");
                return 0;
            case 2:
                printf("You entered the number twelve\n");
                return 0;
            case 3:
                printf("You entered the number thirteen\n");
                return 0;
            case 4:
                printf("You entered the number fourteen\n");
                return 0;
            case 5:
                printf("You entered the number fifteen\n");
                return 0;
            case 6:
                printf("You entered the number sixteen\n");
                return 0;
            case 7:
                printf("You entered the number seventeen\n");
                return 0;
            case 8:
                printf("You entered the number eighteen\n");
                return 0;
            case 9:
                printf("You entered the number nineteen\n");
                return 0;
        }
    }

    switch (tensPlace)
    {
        case 1:
            printf("You entered the number ten\n");
            return 0;
        case 2:
            strcpy(tensPlaceWord, tensPlaceList[0]);
            break;
        case 3:
            strcpy(tensPlaceWord, tensPlaceList[1]);
            break;
        case 4:
            strcpy(tensPlaceWord, tensPlaceList[2]);
            break;
        case 5:
            strcpy(tensPlaceWord, tensPlaceList[3]);
            break;
        case 6:
            strcpy(tensPlaceWord, tensPlaceList[4]);
            break;
        case 7:
            strcpy(tensPlaceWord, tensPlaceList[5]);
            break;
        case 8:
            strcpy(tensPlaceWord, tensPlaceList[6]);
            break;
        case 9:
            strcpy(tensPlaceWord, tensPlaceList[7]);
            break;
    }

    switch (onesPlace)
    {
        case 1:
            strcpy(onesPlaceWord, onesPlaceList[0]);
            break;
        case 2:
            strcpy(onesPlaceWord, onesPlaceList[1]);
            break;
        case 3:
            strcpy(onesPlaceWord, onesPlaceList[2]);
            break;
        case 4:
            strcpy(onesPlaceWord, onesPlaceList[3]);
            break;
        case 5:
            strcpy(onesPlaceWord, onesPlaceList[4]);
            break;
        case 6:
            strcpy(onesPlaceWord, onesPlaceList[5]);
            break;
        case 7:
            strcpy(onesPlaceWord, onesPlaceList[6]);
            break;
        case 8:
            strcpy(onesPlaceWord, onesPlaceList[7]);
            break;
        case 9:
            strcpy(onesPlaceWord, onesPlaceList[8]);
            break;
    }

    printf("You entered the number %s%s\n", tensPlaceWord, onesPlaceWord);

    return 0;
}
