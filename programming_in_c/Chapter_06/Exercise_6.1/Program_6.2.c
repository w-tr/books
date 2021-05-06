//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//    ____ ___   __    _               
//   / __// o |,'_/  .' \              
//  / _/ / _,'/ /_n / o /   _   __  _    ___  _   _  __
// /_/  /_/   |__,'/_n_/   / \,' /.' \ ,' _/,' \ / |/ /
//                        / \,' // o /_\ `./ o // || / 
//                       /_/ /_//_n_//___,'|_,'/_/|_/ 
//  
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Author         : Wesley Taylor-Rendal (WTR)
// Design history : Review git logs.
// Description    : Calculating the Average of a Set of Grades and Counting the
//                : Number of Failing Test Grades
// Concepts       : Embedded if condition in loop for count.
//                : Type casting
//                : Extra - I used const for perm if condition check
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    int numOfGrades, i, grade;
    int gradeTotal = 0;
    int failureCount = 0;
    const int failure_cut_off = 65; // extra to original
    float average;

    printf("How many grades would you like to enter? ");
    scanf("%i", &numOfGrades);

    for (i = 1; i<= numOfGrades; i++) 
    {
        printf("Enter grade #%i: ", i);
        scanf("%i", &grade);

        gradeTotal += grade;

        if (grade < failure_cut_off)
            failureCount++;
    }
    average = (float) gradeTotal / numOfGrades;

    printf("\nGrade Average = %.2f\n", average);
    printf("Number of Failures = %i\n", failureCount);

    return 0;

}
