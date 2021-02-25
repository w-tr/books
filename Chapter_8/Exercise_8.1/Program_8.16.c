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
// Description    : Calculating Factorials Recursively
// Concepts       : Recursion by successively applying the same solution done
//                :     by a function calling itself
//                : Forcing numbers to be positive by unsigned type.

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    unsigned int j;
    unsigned long int factorial (unsigned int n);

    for (j = 0; j <11; ++j)
        printf("%2u! = %lu\n", j, factorial(j));

    return 0;
}
unsigned long int factorial (unsigned int n)
{
    unsigned long int result;

    if (n == 0)
        result = 1;
    else 
        result = n * factorial (n - 1); // recursion when answer involves recalling same funct

    return result;
}
