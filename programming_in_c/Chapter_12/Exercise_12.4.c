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
// Description    : Rotate function with knowledge of system architecture.
// Concepts       : Different computers have different architectures and 
//                :     therefore no assumptions can be made during a rotation.
//                : What i'm learning here is that VHDL is so much more powerful
//                :     because you can truely know what happens behind the 
//                :     scenes
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    unsigned int rotate(unsigned int value, int n);
    unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;
    unsigned int rotate(unsigned int value, int n);

    printf("Rotate w1 = 0xabcdef00u, w2 = 0xffff1122u\n");

    printf("%x\n", rotate(w1, 8));
    printf("%x\n", rotate(w1, -16));
    printf("%x\n", rotate(w2, 4));
    printf("%x\n", rotate(w2, -2));
    printf("%x\n", rotate(w1, 0));
    printf("%x\n", rotate(w1, 44)); // hmm?
    printf("%x\n", rotate(w1, 12)); // hmm?

    return 0;
}

int int_size()
{
    int count = 0;
    unsigned int number = ~0;
    while (number>0)
    {
        count++;
        number <<= 1; // 0's always shifted in.
    }

    return count;
}

unsigned int rotate(unsigned int value, int n)
{
    int int_size();
    unsigned int result, bits;
    int const limit = int_size();

    // a way to deal with the out of bounds.
    if (n > 0)
        n %= limit;
    else
        n = -(-n%limit);

    if (n == 0)
        result = value;
    else if (n > 0)
    {
        bits = value >> (limit - n);
        result = (value << n) | bits; // concat at end.
    }
    else
    {
        n = -n;
        bits = value << (limit - n);
        result = (value >> n) | bits; // concat at end.
    }

    return result;
}
