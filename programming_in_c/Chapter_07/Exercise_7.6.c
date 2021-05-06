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
// Description    : Fibonacci numbers without an array
// Concepts       : good old' shift reg 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    int reg1 = 1;
    int reg2 = 2;
    int current_state;
    int i;

    printf("%i    ", reg1);
    printf("%i    ", reg2);
    for (i=0; i<15; i++)
    {
        current_state = reg1+reg2;
        // update other registers. This is a classic example
        // where vhdl signals and variables react differently
        reg1 = reg2;
        reg2 = current_state; // reg1+reg2
        printf("%i    ", current_state);
    }
    printf("\n");
    return 0;
}
