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
// Description    : Using the Basic Data Types
// Concepts       : Introducing the various data types and how to display
//                : them with printf function. For best understanding review
//                : stdio.h documentation regarding printf.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    int    integerVal = 100;
    float  floatingVal = 331.79;
    double doubleVal   = 8.44e+11;
    char   charVal     = 'W';
    _Bool  boolVal     = 0;

    printf("integerVal  = %i\n", integerVal);
    printf("floatingVal = %f\n", floatingVal);
    printf("doubleVal_e = %e\n", doubleVal);
    printf("doubleVal_g = %g\n", doubleVal);
    // printf("doubleVal_d = %d\n", doubleVal); // extra to origina
    printf("doubleVal_f = %f\n", doubleVal); // extra to original
    printf("charVal     = %c\n", charVal);
    printf("boolVal     = %i\n", boolVal);

    return 0;
}
