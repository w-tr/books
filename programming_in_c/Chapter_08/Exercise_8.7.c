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
// Description    : Function to raise int to positive int power
// Concepts       : Recursion and condition checking
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

long int pow(int baseNumber, int exponent)
{
    int result = baseNumber;
    if (exponent == 0)
        return 1;
    else
        return result*=pow(baseNumber, exponent-1); // Recursive function
}

int main(void) 
{
    int x, n;

    for (n = 0, x = 2; n < 8; ++n) 
        printf("%i^%i = %li\n", x, n , pow(x, n));

    for (n = 0, x = 3; n < 8; ++n) 
        printf("%i^%i = %li\n", x, n , pow(x, n));

    return 0;
}
