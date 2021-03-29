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
// Description    : Using the arithmetic operators
// Concepts       : Illustrating the various arithmetic operations
//                : Shows rhs of assignment can be used for value substitution.
//                : The resultant is returned and output.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{

    int a = 100;
    int b = 2;
    int c = 25;
    int d = 4;
    int result;

    printf("Original values a=%i, b=%i, c=%i, d=%i", a, b, c, d);
    printf("\n");

    printf("Subtraction    : ");
    result = a - b;
    printf("a - b = %i\n", result);

    printf("Multiplication : ");
    result = b * c;
    printf("b * c = %i\n", result);

    printf("Division       : ");
    result = a / c;
    printf("a / c = %i\n", result);

    printf("Precedence     : ");
    result = a + b * c;
    printf("a + b * c = %i\n", result);

    printf("Precedence2    : ");
    printf("a * b + c * d = %i\n", a * b + c * d);

    return 0;
}

