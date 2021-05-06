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
// Description    : Finding invalid variables from list.
// Concepts       : What variable name can and can't be accepted by compiler
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
int main(void)
{
    // Run and see which variable names bomb out.
    // Explaination to RHS
    int Int;                  // Allowed but looks like reserved word int
//  int char;                 // Reserved word
//  int 6_05;                 // Cant starting with number.
    int Calloc;               // Allowed but looks like reserved word calloc
    int Xx;                   // Allowed
    int alphase_beta_routine; // Allowed
    int floating;             // Allowed
    int _1312;                // Allowed
    int z;                    // Allowed
    int ReInitialize;         // Allowed
    int _;                    // Allowed but conveys little meaning
    int A$ = 10;              // Allowed on vs2019 and cygwin with std=c99, 
                              //    but some compilers struggle with special char - $

    printf("Output of A$ = %i", A$);

    return 0;
}



