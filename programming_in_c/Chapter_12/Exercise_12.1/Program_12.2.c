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
// Description    : Illustrate Bitwise Operators
// Concepts       : The various bitwise operators. See language for precedence
//                : Recall the temp needed in sort comand, xor shows this
//                :     can be done without needing temp variable
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    unsigned int w1 = 0525u, w2 = 0707u, w3 = 0122u;

    printf("w1 & w2, w1 | w2, w1 ^ w2\n");
    printf("%o   %o   %o\n", w1 & w2, w1 | w2, w1 ^ w2);

    printf("~w1,  ~w2,  ~w3\n");
    printf("%o   %o   %o\n", ~w1, ~w2, ~w3);

    printf("w1 ^ w1, w1 & ~w2, w1 | w2 | w3\n");
    printf("%o   %o   %o\n", w1 ^ w1, w1 & ~w2, w1 | w2 | w3);

    printf("w1 | w2 & w3, w1 | w2 & ~w3\n");
    printf("%o   %o\n", w1 | w2 & w3, w1 | w2 & ~w3);

    printf("Demorgans\n");
    printf("~(~w1 & ~w2), ~(~w1 | ~w2)\n");
    printf("%o   %o\n", ~(~w1 & ~w2), ~(~w1 | ~w2));

    printf("w1 = %o, w2 = %o\n", w1, w2);
    w1 ^= w2;
    w2 ^= w1;
    w1 ^= w2;
    printf("w1 = %o, w2 = %o\n", w1, w2);
    return 0;

}
