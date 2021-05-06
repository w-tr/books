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
// Description    : Implementing a shift function
// Concepts       : The unsigned makes the shift a logical right shift (0's 
//                :     added)
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

unsigned int shift (unsigned int value, int n)
{
    if (n > 0)
        value <<= n;
    else 
        value >>=-n;

    return value;
}

int main(void)
{
    unsigned int shift (unsigned int value, int n);

    unsigned int w1 = 0177777u, w2= 0444u;

    printf("%o\t%o\n", shift(w1, 5), w1<<5);
    printf("%o\t%o\n", shift(w1, -6), w1>>6);
    printf("%o\t%o\n", shift(w2, 0), w2 >>0); // point?
    printf("%o\n", shift(shift(w1, -3), 3));

    return 0;

}
