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
// Description    : The Bitwise AND Operator
// Concepts       : The AND operator can be used to mask/filter a word.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    unsigned int word1 = 077u, word2 = 0150u, word3 = 0210u;

    printf("%o   ", word1 & word2);
    printf("%o   ", word1 & word1);
    printf("%o   ", word1 & word2 & word3); // exercise 
    // confirmation test - word1 0 000 000 000 111 111
    //                     word2 0 000 000 001 101 000
    //                     word3 0 000 000 010 001 000
    //                     ---------------------------
    //                     AND'd 0 000 000 000 001 000  Shown as 10


    printf("%o   ", word1 & 1);

    return 0;

}


