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

int main(void)
{
    unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;
    unsigned int rotate(unsigned int value, int n);

    printf("%x\n", rotate(w1, 8));
    printf("%x\n", rotate(w1, -16));
    printf("%x\n", rotate(w2, 4));
    printf("%x\n", rotate(w2, -2));
    printf("%x\n", rotate(w1, 0));
    printf("%x\n", rotate(w1, 44)); // hmm?
    printf("%x\n", rotate(w1, 12)); // hmm?

    return 0;
}

unsigned int rotate(unsigned int value, int n)
{
    unsigned int result, bits;

    // a way to deal with the 44.
    if (n > 0)
        n %= 32;
    else
        n = -(-n%32);

    if (n == 0)
        result = value;
    else if (n > 0)
    {
        bits = value >> (32 - n);
        result = (value << n) | bits; // concat at end.
    }
    else
    {
        n = -n;
        bits = value << (32 - n);
        result = (value >> n) | bits; // concat at end.
    }

    return result;
}
