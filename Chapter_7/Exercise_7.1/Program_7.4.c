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
// Description    : Revising the program 6.10a to generate prime numbers, 
//                :   version 2
// Concepts       : Condition based assignment to array
//                : Limited dimension of array used. Only 15 primes upto 50
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>

int main(void) 
{
    int p, i, primes[50], primeIndex=2;
    bool isPrime;

    // using arrays
    primes[0] = 2;
    primes[1] = 3;

    // inc to avoid even numbers
    for (p=5; p<=50; p=p+2)     
    {
        isPrime=true;

        // Rule out triggering on 1 and 2.
        for (i = 2; isPrime && p/primes[i] >= primes[i]; ++i)
            if (p%primes[i] == 0)
                isPrime = false;

        if (isPrime == true) // if isPrime
        {
            primes[primeIndex] = p;
            ++primeIndex; // There are 15 primes up to 50

        }
    }

    for (i = 0; i < primeIndex; ++i) 
        printf("%i  ", primes[i]);

    printf("\n");

    return 0;
}
