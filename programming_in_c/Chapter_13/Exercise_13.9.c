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
// Description    : Writing a macro for ABSOLUTE_VALUE condition
// Concepts       : Passing variables to a define
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

#define ABSOLUTE_VALUE(X) ( (X) >= 0 ? (X) : -(X) )

int main(void) 
{

    printf("ABSULUTE_VALUE ( 10  )   : %i\n", ABSOLUTE_VALUE(10));
    printf("ABSULUTE_VALUE ( -10 )   : %i\n", ABSOLUTE_VALUE(-10));
    printf("ABSULUTE_VALUE (1-10 )   : %i\n", ABSOLUTE_VALUE(1-10));
    printf("ABSULUTE_VALUE (1+10 )   : %i\n", ABSOLUTE_VALUE(1+10));
    printf("ABSULUTE_VALUE (1.1+10 ) : %f\n", ABSOLUTE_VALUE(1.1+10));

    return 0;
}
