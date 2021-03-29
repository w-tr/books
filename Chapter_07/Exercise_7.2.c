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
// Description    : Edited version of Program 7.1 to include initialisation
// Concepts       : For loop to initialise an array after declaration, then
//                :   placing wanted values into elements
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    int values[10];
    int index;

    for (index=0; index<10; index++)
        values[index] = 0;

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
