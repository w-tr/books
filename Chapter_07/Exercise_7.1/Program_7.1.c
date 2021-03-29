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
// Description    : Working with an arrays
// Concepts       : Creating an array with dimensions - 10
//                : Assiging some values to the array elements
//                : Using previously assigned array elements to assign new 
//                :   elements by indexing
//                : Demonstrating what values exist in uninitalised array 
//                :   elements. One cannot assume they are zero, in 1d array.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    int values[10];
    int index;

    values[0] = 197;
    values[2] = -100;
    values[5] = 350;
    values[3] = values[0]+values[5];
    values[9] = values[5]/10;
    --values[2];

    for ( index=0; index<10; ++index)
        printf("Values[%i] = %i\n", index, values[index]);

    return 0;

}
