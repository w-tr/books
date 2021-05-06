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
// Description    : Revised version of program_8.9
// Concepts       : Unconstrained dimension for array however generic length 
//                :     info still supplied for the loop. 
//                :     Does c have a 'length feature?
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int minimum (int values[], int numOfElements)
{
    int minVal, i;
    minVal = values[0];

    for (i=0; i<numOfElements; ++i)
        if (values[i] < minVal)
            minVal = values[i];

    return minVal;
}

int main(void)
{
    int array1[5] = {157, -28, -37, 26, 10 };
    int array2[7] = { 12, 45, 1, 10, 5, 3, 22};

    int min(int values[10]); // Example of prototype declaration/think vhdl component black boxing

    printf("array1 min : %i\n", minimum(array1, 5));
    printf("array2 min : %i\n", minimum(array2, 7));

    return 0;
}
