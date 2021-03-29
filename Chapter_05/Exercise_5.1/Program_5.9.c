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
// Description    : Implementing a reversing program to reverse the digits of a
//                : number. 
// Concepts       : Do statement & iteration at least once.
//                :  thus allowing 0 as input.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
#include <stdio.h>

int main(void)
{
    int number, right_digit;

    printf("Enter your number\n");
    scanf("%i", &number);

    do  
    {
        right_digit = number % 10;
        printf("%i", right_digit);
        number = number / 10; // clever use of integer also /= could be used.
    } 
    while (number != 0 );

    printf("\n");

    return 0;
}
