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
// Description    : Modify program 5.5 to allow bespoke iteration
// Concepts       : Nested loop with outer limit conditions set by user
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    int n, number, triangularNumber, counter, limit;

    printf("Please select number of triangular numbers you wish to calculate: ");
    scanf("%i", &limit);

    for (counter = 1; counter <= limit; ++counter)
    {

        printf("What triangular number do you want to calculate? ");
        scanf("%i", &number);

        triangularNumber = 0;

        for (n = 1; n <= number; n++)
            triangularNumber += n;

        printf("TriangularNumber %i is %i\n", number, triangularNumber);
    }

    return 0;

}
