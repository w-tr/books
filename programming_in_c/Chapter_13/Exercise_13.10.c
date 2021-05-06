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
// Description    : The ## operator
// Concepts       : String literals
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

//#define printint(n)   printf("%i\n", x ## n)    
// From chapter
#define printint(var)   printf(#var " is %i\n", var)    
#define printx(n) printint(x ## n)

int main(void) 
{
    int x1 = 1, x2 = 2, x3 = 3, x4 = 4, x5 = 5;
    int i;

    printx(1);   
    printx(2);   
    printx(3);   
    printx(4);   
    printx(5);   

    // xi undefined, preprocessor has created a char string and is 
    // before the for loop iterates therefore sub is actually
    // printf("%i\n", xi). rather than x1 x2 x3.
    //for (i=1; i < 5; i++)
        //printx(i);   


    return 0;
}
