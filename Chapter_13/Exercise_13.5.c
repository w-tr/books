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
// Description    : Writing a macro for SHIFT
// Concepts       : Passing variables to a define
//                : Ability to transcend data types
// NOTE           : This works with mobaxterm, but not with visual studio
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

#define SHIFT(VAL,N) (((N) > 0) ? ((VAL) << (N)) : ((VAL) >> (-N)) )


int main(void)
{

    unsigned int w1 = 0177777u, w2= 0444u;

    printf("%o\t%o\n", SHIFT(w1, 5), w1<<5);
    printf("%o\t%o\n", SHIFT(w1, -6), w1>>6);
    printf("%o\t%o\n", SHIFT(w2, 0), w2>>0); // point?
    printf("%o\n", SHIFT(SHIFT(w1, -3), 3));

    return 0;
}

