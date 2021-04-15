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
// Description    :
// Concepts       :
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

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

// from start on right to left replacement.
void bitpat_set(unsigned int *x, unsigned int set_val, int start, int width)
{
    // unset x for mask
    // 000000000111  <- mask width
    // 000011100000  <- positioned
    // 111100011111  <- How to unset values
    //      & with x.
    int allOnes = ~0;
    int maskWidth = ~(allOnes << width);
    int maskWidthPositioned = (maskWidth << (int_size()-start-width));
    unsigned int unset = ~maskWidthPositioned;
    *x &= unset;
    // OR the set value to correct position.
    int set = set_val << (int_size() - start-width);
    *x |= set;
}

int main(void)
{
    int x = 0xDEADBEEF;
    printf("x = %x\n", x);
    bitpat_set(&x, 0xA, 0, 4);
    printf("x = %x\n", x);
    bitpat_set(&x, 0xB, 4, 4);
    printf("x = %x\n", x);
    bitpat_set(&x, 0xC, 8, 4);
    printf("x = %x\n", x);
    bitpat_set(&x, 0xD, 12, 4);
    printf("x = %x\n", x);
    bitpat_set(&x, 0xE, 16, 4);
    printf("x = %x\n", x);
    bitpat_set(&x, 0xF, 20, 4);
    printf("x = %x\n", x);
    bitpat_set(&x, 0x0, 24, 4);
    printf("x = %x\n", x);
    bitpat_set(&x, 0xA, 28, 4);
    printf("x = %x\n", x);
    return 0;
}
