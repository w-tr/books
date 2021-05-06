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
// Description    : Arithmetic or Logical
// Concepts       : Identifying the type of shift my local computer does
//                :     I haven't writen a function for this, program has given
//                :     answer as per page 288 (right shift operator)
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    int w=0xF777EE22;
    signed int sw=0xF777EE22;
    unsigned int uw=0xF777EE22;

    printf("int w=0xF777EE22 >> 1 = %x\n", w>>=1);
    printf("signed int sw=0xF777EE22 >> 1 = %x\n", sw>>=1);
    printf("unsigned int uw=0xF777EE22 >> 1 = %x\n", uw>>=1);

    return 0;
}
