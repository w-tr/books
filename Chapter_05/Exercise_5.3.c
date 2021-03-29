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
// Description    : Finding triangular number with a forumular
// Concepts       : A forumula that relies current loop index and an offset.
//                : Changing the iterative jump
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void) 
{
    int n, triangularNumber;

    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf("  n    Triangular number\n");
    printf("---    -----------------\n");

    triangularNumber = 0;

    for (n=0; n<= 50; n+=5) {
        triangularNumber = n*(n+1) / 2;
        printf("%i \t\t %i\n", n, triangularNumber);
    }

    return 0;
}
