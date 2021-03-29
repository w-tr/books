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
// Description    : Rounding off an integer because conditional statements have 
//                : not be introduced yet. This program just implements an 
//                : sequence of arithmetic operations, as per exercise 
//                : description.
// Concepts       : Shows precedence of arithmetic operations through
//                : implementation.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// next_multiple = i+j - i%j
// 
#include <stdio.h>

int main(void)
{
    // i     | j
    // 365   | 7
    // 12258 | 12
    // 996   | 4
    //
    int i, j;

    i = 256;
    j = 7;
    printf("Next multiple = %i + %i - %i %% %i\n", i, j, i, j);
    printf("              = %i + %i - %i\n", i, j, i % j);
    printf("              = %i\n", i + j - i % j);

    i = 365;
    j = 7;
    printf("Next multiple = %i + %i - %i %% %i\n", i, j, i, j);
    printf("              = %i + %i - %i\n", i, j, i % j);
    printf("              = %i\n", i + j - i % j);

    i = 12258;
    j = 23;
    printf("Next multiple = %i + %i - %i %% %i\n", i, j, i, j);
    printf("              = %i + %i - %i\n", i, j, i % j);
    printf("              = %i\n", i + j - i % j);

    i = 996;
    j = 4;
    printf("Next multiple = %i + %i - %i %% %i\n", i, j, i, j);
    printf("              = %i + %i - %i\n", i, j, i % j);
    printf("              = %i\n", i + j - i % j);

    return 0;
}
