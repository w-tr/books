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
// Description    : Generate a table of triangular numbers
// Concepts       : ++for increment
//                : {blocking for loop}, consider blocking for functions was 
//                :        covered unconciously.
//                : += for add and assign
//                : An example of poor printf alignment.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void) 
{
    int n, triangularNumber;

    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf("  n    Sum from 1 to n\n");
    printf("---    ---------------\n");

    triangularNumber = 0;

    for (n=1; n<= 10; ++n) {
        triangularNumber += n;
        printf("  %i                %i\n", n, triangularNumber);
    }

    return 0;
}
