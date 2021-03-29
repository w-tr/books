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
// Description    : Calculating the Eighth Triangular Number
// Concepts       : Repeating a task can be tedious. This is an example of
//                : verbosity.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    int triangularNumber;

    triangularNumber = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8; // 8th num

    printf("The eighth triangular number is %i\n",
            triangularNumber);

    return 0;

}

