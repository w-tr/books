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
// Description    : Generating Fibonacci Numbers
// Concepts       : Using an array to generate a number set
//                : Using the set for calculating new numbers in the set
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Generating Fibonacci Numbers
//
#include <stdio.h>

int main(void)
{
    int fibonacci[15], i;

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (i=2; i <15; ++i)
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];

    // This must be inefficient because the additional loop to 
    // print instead of on the fly printing.
    for (i=0; i<15; ++i)
        printf("%i\n", fibonacci[i]);

    return 0;

}
