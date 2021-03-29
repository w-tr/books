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
// Description    : Refining Program 6.10 for less iterations when calculating
//                : primes.
// Concepts       : 1. Inefficiency because even numbers are checked
//                :     Solution change for loops iterations.
//                : 2. Inner loop starts at 2, whereas it could or should start 
//                : at d
//                :     Solution change innter for loop.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>

int main(void) 
{
    int p, d;
    //_Bool isPrime;
    bool isPrime;

    // I don't like this hack, however it is known that 2 is prime and therefore we are concerned with what happens thereafter
    printf("2  ");

    for (p=3; p<=50; p+=2)
    {
        isPrime=true;

        // Rule out triggering on 1 and 2, only run if still a prime.
        for (d = 3; ((d<(p/2)) && (isPrime==true)); ++d)
            if (p%d == 0)
                isPrime = false; // used as a break clause;

        if (isPrime != false) // if isPrime
            printf("%i  ", p);
    }

    printf("\n");
    return 0;
}
