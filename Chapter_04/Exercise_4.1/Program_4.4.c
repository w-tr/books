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
// Description    : Illustrating the Modulus Operator
// Concepts       : Introduces the modulus operator %
//                : You can get back to the original integer by
//                :     adding
//                :     quotient represented by a / d
//                :     and
//                :     remainder represented by a % d
//                :     together
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//Modulus
#include <stdio.h>

int main(void)
{
    int a = 25, b = 5, c = 10, d = 7;

    printf("a %% b = %i\n", a%b);
    printf("a %% c = %i\n", a%c);
    printf("a %% d = %i\n", a%d);
    printf("a / d * d + a %% d = %i\n",
            a / d * d + a % d);

    return 0;
}
