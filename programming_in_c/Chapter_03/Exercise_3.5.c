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
// Description    : Find syntax errors
// Concepts       : The importants of correct syntax
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// 
// See snipped of code below (numb.) is where fault in code is
/*
#include <stdio.h>

int main(Void)                                                   (1.)
    (                                                            (2.)
     INT sum;                                                    (3.)
     /* COMPUTE RESULTS                                          (4.)
    sum = 25+37-19                                               (5.)
    /* DISPLAY RESULTS                                           (6.)
     printf ("The answer is %i\n" sum);                          (7.)
     return 0;
     }

*/
// (1.) Capital letter, means it's not keyword void.
// (2.) Wrong parathesis
// (3.) Capital letters, means it's not keyword int.
// (4.) Comment is not terminated.
// (5.) No ; termination on sum, also (3.) sum doesn't exist as variable yet.
// (6.) Same as (4.)
// (7.) printf function does not have comma delimited to ack variable pointers.
// 
// The correct code is seen below.
#include <stdio.h>

int main(void)
{
    int sum;
    /* COMPUTE RESULTS */
    sum = 25+37-19;
    /* DISPLAY RESULTS */
    printf ("The answer is %i\n", sum);
    return 0;
}
