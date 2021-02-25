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
// Description    : Calculating the absolute value
// Concepts       : f1 does not change value because variables become local in a 
//                :     function.
//                : Inputs parameters need to be of correct arguement types.
//                : Likewise the output of a function is of type, thus float/int 
//                :     at bottom.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

float absVal (float x)
{
    if (x < 0)
        x = -x;

    return x;
}

int main(void)
{
    float f1 = -15.0, f2= 20.0, f3=-5.0;
    int i1=-716;
    float result;

    result = absVal(f1);
    printf("result = %.2f\n", result);
    printf("f1 = %.2f\n", f1);

    result = absVal(f2) + absVal(f3);
    printf("result = %.2f\n", result);

    result = absVal((float)i1);
    printf("result = %.2f\n", result);

    printf("%.2f\n", absVal(-6.0)/4);

    return 0;
}
