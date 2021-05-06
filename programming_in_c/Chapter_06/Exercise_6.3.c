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
// Description    : Result of division to 3 decimal points
// Concepts       : Decision based on an if-else statement
//                : Failsafe programming, Exercise 6.2 should have checked for
//                :     division by zero
//                : Field width specification, and type casting for division
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    int  numerator,denominator;
    float result;
    
    printf("Please enter two integer numbers: ");
    scanf("%i %i", &numerator, &denominator);

    if (denominator != 0)
    {
        result = (float) numerator / denominator;
        printf("Result = %.3f\n", result);
        printf("Result2 = %.3f\n", (float) numerator / denominator);
    }
    else
        printf("Cannot divide by zero!");

    return 0;
}
