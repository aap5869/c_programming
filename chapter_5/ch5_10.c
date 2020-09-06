/* C Programming A Modern Approach
 * Chapter 5
 * Exercise 10  
 *
 * Converts a numerical grade into a letter grade.
 * Grading scale:
 * A = 90 - 100
 * B = 80 - 89
 * C = 70 - 79
 * D = 60 - 69
 * F =  0 - 59
 *
 * Usage:
 * Enter a numerical grade : 84
 * Letter grade: B
 *
 * Author: Alex Perkins
 * Date: 05-September-2020
 */

#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    
    uint_fast8_t grade = 0;
    //unsigned int grade = 0;
    char letterGrade = 0;

    printf("Enter numerical grade: ");
    scanf("%" SCNuFAST8, &grade);
    //scanf("%u", &grade);

    if (grade > 100 || grade < 0)
    {
        printf("Enter a grade between 0 and 100\n");
        return 1;
    }

    uint_fast8_t tensPlace = grade / 10;
    //unsigned int tensPlace = grade / 10;
    switch (tensPlace)
    {
        case 10U:
            letterGrade = 'A'; 
            break;
        case 9:
            letterGrade = 'A';
            break;
        case 8:
            letterGrade = 'B';
            break;
        case 7:
            letterGrade = 'C';
            break;
        case 6:
            letterGrade = 'D';
            break;
        case 5:
            letterGrade = 'F';
            break;
        case 4:
            letterGrade = 'F';
            break;
        case 3:
            letterGrade = 'F';
            break;
        case 2:
            letterGrade = 'F';
            break;
        case 1:
            letterGrade = 'F';
            break;
        case 0:
            letterGrade = 'F';
            break;
    }

    printf("Letter grade: %c\n", letterGrade);

    return 0;
}
