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
// Description    : Revising the program to Generating a Table of Prime Numbers
// Concepts       : Introducing the boolean library
//                : logical negating and precedence
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>

int main(void) 
{
    int p, d;
    //_Bool isPrime;
    bool isPrime;

    for (p=2; p<=50; ++p)
    {
        isPrime=true;

        // Rule out triggering on 1 and 2.
        for (d = 2; d<p; ++d)
            if (p%d == 0)
                isPrime = false;

        if (isPrime != false) // alternative if (isPrime)
            printf("%i  ", p);
    }

    printf("\n");
    return 0;
}
