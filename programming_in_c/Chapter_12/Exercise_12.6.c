
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
// Description    : Do a bit patern search on a number.
// Concepts       : There are multiple ways to do this. Two that come to mind
//                : 1. From the previous exercise use the function that turns
//                :        an int into a binary string, then reuse the find
//                :        string function from chapter 10 - char strings
//                : 2. Using this chapters lessons, have a moving mask. Check 
//                :        post mask result to see if the patern is met.
//                :
//                : Again with the right to left or left to right.
//                :     Author says 101 is found 11 bits to the right
//                :     this program will say 2 bits  to the left.
//                :     Add the size of 3 and you get the full 16 bits.
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
// l2r = left to right
int bitpat_search_l2r(int source, int pattern, int width)
{
    int int_size();
    // Previously I just had pattern shift AND source. This 
    // did not preserve the '1' in source regions. For example
    // 101 and 111 would return pattern.
    // Very foolish now i know.
    int mask = ~(~0x0 << width); // wall of '1's
    int pattern_shift = pattern; //nothing needed.
    int i, outcome;
    for (i=0; i < int_size()-width; i++)
    {
        outcome = mask & source;
        if (outcome == pattern_shift)
            return i;
        else 
            source >>=1;
    }
    return -1;
}

int bitpat_search_r2l(int source, int pattern, int width)
{
    int int_size();
    int mask = ~(~0x0u >> width);
    int pattern_shift = pattern << int_size()-width;
    int i, outcome;
    for (i = 0; i < int_size()-width; i++)
    {
        outcome = mask & source;
        if (outcome == pattern_shift)
            return i;
        else 
            source <<=1;
    }
    return -1;   
}

int main (void)
{
    int bitpat_search_l2r(int source, int pattern, int width);
    int bitpat_search_r2l(int source, int pattern, int width);

    printf("Test as per book right to left %i\n", bitpat_search_l2r(0xe1f4, 0x5, 3));
    printf("Test as per book left to right %i\n", bitpat_search_r2l(0xe1f4, 0x5, 3));
    printf("Test as per book right to left %i\n", bitpat_search_l2r(0xe1f4, 0xe, 4));
    printf("Test as per book left to right %i\n", bitpat_search_r2l(0xe1f4, 0xe, 4));

    return 0;
}
