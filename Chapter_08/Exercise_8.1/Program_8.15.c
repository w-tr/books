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
// Description    : Illustrating Static and Automatic variables
// Concepts       : Up till now every variable in a function was declared 
//                :     automatically. This means it loses its value each time 
//                :     the function terminates. A quirk of auto vars is they 
//                :     also aren't gauranteed to be zero on initilisation.
//                : Static variables on the otherhand do not lose their value 
//                :     on termination of the function. Therefore they act more 
//                :     like an acumulator.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

void auto_static(void)
{
    int autoVar = 1; 
    static int staticVar = 1; // intialise only on first call.
    // staticVar = 1; is equavilant initialising each time.

    printf("Automatic = %i, static = %i\n", autoVar, staticVar);

    ++autoVar;
    ++staticVar;
}

int main(void)
{
    int i;
    void auto_static(void);

    for (i=0; i<5; ++i)
        auto_static();

    return 0;
}
