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
// Description    : More examples of arithmetic operators
// Concepts       : Shows left to right precedence of / and *.
//                : Shows effect of integer and float division.
//                : Introduces the unary operator -.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    int   a = 25;
    int   b = 2;
    float c = 25.0;
    float d = 2.0;

    printf("Original values a=%i, b=%i, c=%f, d=%f", a, b, c, d);
    printf("\n");

    printf("6 + a / 5 * b = %i\n", 6 + a / 5 * b);
    printf("6 + a * 5 / b = %i\n", 6 + a * 5 / b); // Extra to original
    printf("a / b * b = %i\n", a / b * b);
    printf("c / d * d = %f\n", c / d * d);
    printf("-a = %i\n", -a);

    return 0;
}

