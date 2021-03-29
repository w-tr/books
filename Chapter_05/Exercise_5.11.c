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
// Description    : Calculate the sum of the digits within a number
// Concepts       : Using arithmetic operators to shave a value off into a 
//                : variable and then performing a looped operation on that.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void) 
{

    // Caveat this is for positive numbers
    // because making decisions chapter which would help with abs
    // has yet to be implemented.
    int number, right_digit, sum;

    printf("Enter your number\n");
    scanf("%i", &number);

    sum = 0;
    while (number != 0 ) 
    {
        right_digit = number % 10;
        sum += right_digit;
        number = number / 10; // clever use of integer also /= could be used.
    }
    printf("The sum is : %i", sum);
    return 0;
}
