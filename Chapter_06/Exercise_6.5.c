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
// Description    : Revising Program 5.9 to deal with negative numbers
// Concepts       : Using a flag to print '-' at end.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    int number, right_digit;
    _Bool isNeg = 0;

    printf("Enter your number\n");
    scanf("%i", &number);

    if (number<0)
    {
        isNeg = 1;
        number = -number; // Negate
    }

    do  
    {
        right_digit = number % 10;
        printf("%i", right_digit);
        number = number / 10; // clever use of integer also /= could be used.
    } 
    while (number != 0 );

    if (isNeg)
        printf("-");

    printf("\n");

    return 0;
}
