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
// Description    : Solving Quadratic equations for non imaginary numbers
// Concepts       : Utilising global variables
//                : Proof checking for imaginary.
//                : for info - https://www.youtube.com/watch?v=mDmRYfma9C0
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

// global
double a, b, c;

double getDiscriminant (double a, double b, double c)
{
    return (b*b) - (4*a*c);
}

void getCoeffients(void)
{

    double getDiscriminant (double a, double b, double c);

    printf("A quadratic equations is represented by ax^2 + bx + c = 0\n");
    printf("Please enter the coefficient a :");
    scanf("%lf", &a);
    printf("Please enter the coefficient b :");
    scanf("%lf", &b);
    printf("Please enter the coefficient c :");
    scanf("%lf", &c);
    if (getDiscriminant(a, b, c) < 0)
    {
        printf("The solution contains imaginary numbers - ABORTING....\n");
        // reset global a, b, c
        a = 0; b = 0; c = 0;
    }
}
double absVal (double x)
{
    if (x < 0)
        x = -x;
    return x;
}

double sqrt (double x, const double epsilon)
{

    double absVal (double x);

    double guess = 1.0;
    do {
        guess = (x / guess + guess) / 2.0;
    }
    while (absVal(guess*(guess / x)) >= epsilon);

    return guess;
}

int main(void) 
{
    void getCoeffients(void);
    double sqrt (double x, const double epsilon);
    double x;
    const double epsilon = 1.00001; // how close ratio is to 1
    getCoeffients();
    printf("solving x for + : ");
    x = (-b + sqrt((getDiscriminant(a,b,c)), epsilon) ) / (2*a); // could make this a function
    printf("%g\n", x);
    printf("solving x for - : ");
    x = (-b - sqrt((getDiscriminant(a,b,c)), epsilon) ) / (2*a);
    printf("%g\n", x);
}
