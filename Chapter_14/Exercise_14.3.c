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
// Description    : Guess the following
// Concepts       : Understanding "automatic" type conversion.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

float     f = 1.00;
short int i = 100;
long int  l = 500L;
double    d = 15.00;

// *** f + i
// *** l / d
// *** i / l + f
// *** l * i
// *** f / 2
// *** i / (d + f)
// *** l / (i * 2.0)
// *** l + i / (double) l
int main (void)
{
    printf("Steps listed below are related to the order of conversion as outlined in this chapter\n");
    //printf("f + i, relates to step 3 and returns a float %i\n", f + i); // Prove it breaks see compiler
    printf("f + i, relates to step 3 and returns a float %f\n", f + i);

    //printf("l / d, relates to step 2 and returns a double %i\n", l / d); // Prove it breaks see compiler
    printf("l / d, relates to step 2 and returns a double %lf\n", l / d);

    printf("i / l + f, relates to step 4, then step 3 and returns a float %f\n", i / l + f);

    printf("l * i, relates to step 6 and returns a long int %li\n", l * i);

    printf("f / 2, relates to step 3 and returns a float %f\n", f / 2);

    printf("i / (d + f), relates to step 2, then step 2 and returns a double %lf\n", i / (d + f));
// *** l / (i * 2.0)
    printf("l / (i * 2.0), relates to step 2 or 3, then step 2 or 3 and returns a double/float %lf\n", l / (i * 2.0));
// *** l + i / (double) l
    printf("l + i / (double) l, relates to step 2, then step 2 and returns a float %lf\n", l + i / (double) l);

    return 0;
}
