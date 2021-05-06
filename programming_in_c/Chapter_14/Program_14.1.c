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
// Description    : Using Enumeration types
// Concepts       : Creating an enum type, AND casting the number identifiers.
//                :     Setting Jan=1 makes ID numbers correspond to month.
//                :     This is making use of a number and the SYMBOLIC name
//                : The Concept of break in a switch statement, and how multiple
//                :     instances can get same assignment section at the bottom.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    enum month { january = 1, february, march, april, may, june,
                 july, august, september, october, november, december };

    enum month aMonth;
    int days;

    printf("Enter a month number : ");
    scanf("%i", &aMonth); // Linkable by assigning jan.

    switch (aMonth) {
        case january:
        case march:
        case may:
        case july:
        case august:
        case october:
        case december:
            days = 31;
            break;

        case april:
        case june:
        case september:
        case november:
            days = 30;
            break;

        case february:
            days = 28;
            break;
            
        default:
            printf("Bad month number\n");
            days = 0;
            break;
    }

    if (days != 0) // valid input
        printf("Number of days is %i\n", days);

    if (aMonth == february)
        printf(".... or 29 if it's a leap year\n");

    return 0;
}

