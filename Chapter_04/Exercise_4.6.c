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
// Description    : Calculate value from polynomial given value for x
// Concepts       : 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <math.h>

int main(void)
{
    float ans;
    float ans_alt;
    double ans_alt2;
    float x = 2.55;

    // I assume this program expected a amatuer write up of arithmetic 
    // functions. I cheated by using a maths functions.
    ans = 3*pow(x, 3) - 5*pow(x, 2) + 6;
    // Considering the knowledge present in the book so far the following
    // solution would be used.
    ans_alt = 3*x*x*x - 5*x*x + 6;
    ans_alt2 = 3*x*x*x - 5*x*x + 6;
    
    printf("3*pow(x, 3) - 5*pow(x, 2) + 6 = %f\n", ans); 
    // Interestingly below has rounding error in visual studio 2019, but works 
    // fine in gcc std=c99
    printf("Alternatively                 = %f\n", ans_alt);   
    printf("Alternatively 2               = %lf\n", ans_alt2); 

    return 0;
}
