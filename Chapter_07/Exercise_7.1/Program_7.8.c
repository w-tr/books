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
// Description    : Generating Fibonacci Number using var-length array
// Concepts       : Declaring a variable after running program and getting length.
// Note           : Visual studio error C2057, book requires C99 compiler
//                : Can compile using mobaxterm, or linux equivalent
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    int i, numFibs;

    printf("How many Fib num do you want between (1 & 75)? ");
    scanf("%i", &numFibs);

    if (numFibs < 1 || numFibs > 75) 
    {
        printf("Bad Number, sorry!\n");
        return 1;
    }

    unsigned long long int Fib[numFibs]; // Compiler dependent

    Fib[0] = 0;
    Fib[1] = 1;

    for (i=2; i<numFibs; ++i)
       Fib[i] = Fib[i-1]+Fib[i-2];

    for (i=0; i<numFibs; ++i)
        printf("%llu   ", Fib[i]);

    printf("\n");

    return 0;
}
