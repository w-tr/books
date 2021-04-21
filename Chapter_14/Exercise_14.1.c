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
// Description    : A typedef for function pointer
// Concepts       : Defining, assigning and using a typedef
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

// typedef int (*funct) (void) FunctionPtr; // Wrong
typedef int (*FunctionPtr) (void);

int fCount (void)
{
    static int i = 0;
    return i++;
}


int main(void)
{
    // ***Declaration.
    FunctionPtr fp; 
    // ***Assignment
    fp = fCount;
    // printf("Result is %i\n", fp);  // Argument has type FunctionPtr
    // printf("Result is %i\n", *fp); // pointer is to function not return val
    // ***Using
    printf("Result is %i\n", fp());
    printf("Result is %i\n", fp());
    printf("Result is %i\n", fp());
    printf("Result is %i\n", fp());
    return 0;

}
