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
// Description    : Calculating the Square Root of a Number EDITED
// Concepts       : Same as Program 8.8, with check for incorrect parameters 
//                :     to function. Therefore introducing the concept of 
//                :     a failue get out clause, that prevents lock up of the 
//                :     function
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

float absVal (float x)
{
    if (x < 0)
        x = -x;

    return x;
}

// Newton Raphsom Method
// 1. set guess = 1
// 2. if abs x^2 -x is less than epsi then quit
// 3. set guess to x / guess+guess and loop back to 2.
// 4. you got aprx
float sqrt (float x)
{
    const float epsilon = 0.00001;
    float guess = 1.0;

    if (x < 0 )
    {
        printf("Negative areguement supplied to sqrt.\n");
        return -1.0;
    }

    while (absVal(guess*guess - x) >= epsilon)
        guess = (x / guess + guess) / 2.0;

    return guess;
}

int main (void)
{
    printf("Square root of (2.0) = %f\n", sqrt(2.0));
    printf("Square root of (144.0) = %f\n", sqrt(144.0));
    printf("Square root of (17.5) = %f\n", sqrt(17.5));
    printf("Square root of (-17.5) = %f\n", sqrt(-17.5));

    return 0;
}
