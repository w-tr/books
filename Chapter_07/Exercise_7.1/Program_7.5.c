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
// Description    : Initialising Arrays
// Concepts       : Part initalisation of array on declaration, using natural
//                :    sequential order (0 to max) of index.
//                : Assigning (initalising) the second half post declaration.
//                : Although not shown, enclosing an element number at 
//                :    initalisation can be an alternative to natural order
//                :    assignments
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    // Initialising frist PART of the array 
    int array_values[10] = { 0, 1, 4, 9, 16};
    int i;

    for (i=5; i <10; ++i) 
        array_values[i] = i*i;

    for (i=0; i<10; ++i)
        printf("array_values[%i] = %i\n", i, array_values[i]);

    return 0;
}
