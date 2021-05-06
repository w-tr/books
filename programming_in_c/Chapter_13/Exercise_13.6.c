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
// Description    : Writing a macro for IS_UPPER condition
// Concepts       : Passing variables to a define
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

#define IS_UPPER_CASE(c) ( ( (c) >= 'A' ) && ( (c) <= 'Z') )

void printTest(char c)
{
    if IS_UPPER_CASE(c)
        printf("The character %c is uppercase\n", c);
    else
        printf("The character %c is not uppercase\n", c);
}

int main(void) 
{
    void printTest(char c);
    printTest('c');
    printTest('3');
    printTest('F');
    printTest('Y');
    printTest('z');
    return 0;
}

