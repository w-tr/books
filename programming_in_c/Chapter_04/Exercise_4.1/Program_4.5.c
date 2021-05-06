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
// Description    : Converting between integer and floats
// Concepts       : You can type cast a term to convert it for the purposes of 
//                : an arithmetic expression. If you don't type cast the rhs
//                : type will be supplied to the lhs and then turn to that type
//                : this can lead to rounding errors as shwon on line 35
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Conversions of type
#include <stdio.h>
int main(void)
{
    float f1 = 123.125, f2, f3=2.9;
    int   i1, i2 = -150;
    char  c = 'a';

    i1 = f1;
    printf ("%f assigned to an int produces %i\n", f1, i1);
    // Additional line added to check for round up or round down when dealing
    // with integers to floats.
    i1 = f3; 
    printf ("%f assigned to an int produces %i\n", f3, i1);

    f1 = i2;
    printf("%i assigned to a float produces %f\n", i2, f1);

    f1=i2/100;
    printf("%i divided by 100 produces %f\n", i2, f1);

    f2=i2/100.0;
    printf("%i divided by 100.0 produces %f\n", i2, f2);

    f3 = (float) i2 / 100;
    printf("(float) %i divided by 100 produces %f\n", i2, f3);

    return 0;
}

