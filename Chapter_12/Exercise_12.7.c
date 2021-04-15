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
// Description    : Extraction of bit string
// Concepts       : I'm not sure if author wants 
//                :     my      printf("%x\n", bitpat_get_l2r(x, 4, 4));
//                :     to be   printf("%x\n", bitpat_get_l2r(x, 3, 4));
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

// assume in bounds, will create out bounds checks if used by fools
int bitpat_get_l2r(unsigned int x, int start, int count)
{
    int mask = ~(~0x0u >> count);
    int shifted_x = x << start;
    unsigned int postMask = mask & shifted_x;
    // Divide by 2 until more resonable size.
    return postMask >> (int_size()-count);

}
int bitpat_get_r2l(unsigned int x, int start, int count)
{
}

int main (void)
{
    int x = 0xDEADBEEF;
    printf("%x\n", bitpat_get_l2r(x, 0, 4));
    printf("%x\n", bitpat_get_l2r(x, 4, 4));
    printf("%x\n", bitpat_get_l2r(x, 8, 4));
    printf("%x\n", bitpat_get_l2r(x, 12, 4));
    return 0;
}
