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
// Description    : Modify Program 8.8 and Exercise 8.4 to change newton raphsom
//                :     method to look at difference
// Concepts       : A ratio rather than a difference can converge to 1, rather
//                :     than difference to zero.
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
float sqrt (float x, const float epsilon)
{
    // const float epsilon = 0.00001;
    float guess = 1.0;
    printf("Guess : %f, ", guess);

    //while (absVal(guess*guess - x) >= epsilon)
    do {
        guess = (x / guess + guess) / 2.0;
        printf(" %f", guess);
        if (absVal(guess*guess - x) >= epsilon) // could change to be ratio too
            printf(",");
    } while (absVal(guess*(guess / x)) >= epsilon);

    printf("\n");

    return guess;
}

int main (void)
{
    // const float epsilon = 0.00001;
    // const float epsilon = 0.01;
    const float epsilon = 1.01; // how close ratio is to 1
    printf("Square root of (2.0) = %f\n", sqrt(2.0, epsilon));
    printf("Square root of (144.0) = %f\n", sqrt(144.0, epsilon));
    printf("Square root of (17.5) = %f\n", sqrt(17.5, epsilon));
    // printf("Square root of (-17.5) = %f\n", sqrt(-17.5));

    return 0;
}
