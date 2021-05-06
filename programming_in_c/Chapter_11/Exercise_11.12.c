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
// Description    : Given x, determine y.
// Concepts       : Understanding c, before compiling.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    char *message = "Programming in C is fun\n";
    char message2[] = "You said it\n";
    char *format = "x = %i\n"; // what does printf do with %i?
    int x = 100;

    // SET 1                                    // PREDICTIONS                     // ACTUAL
    printf("Programming in C is fun\n");        // As expected                     // ""
    printf("%s", "Programming in C is fun\n");  // As 1st in set, newline unknown  // ""
    printf("%s", message);                      // As 1st in set, as pg261 to 265  // ""
    printf(message);                            // Unknown, is %s needed?          // Works
    
    // SET 2                    // PREDICTIONS              // ACTUAL
    printf("You said it\n");    // As expected              // ""
    printf("%s", message2);     // As 1st in set            // ""
    printf(message2);           // As per line 29           // ""
    printf("%s", &message2[0]); // As 1st in set, see pg261 // ""

    // SET 3                    // PRIDICTIONS              // ACTUAL
    printf("said it\n");        // As expected              // ""
    printf(message2+4);         // As per line 29 + offset  // ""
    printf("%s", message2+4);   // As 1st in set            // ""
    printf("%s", &message2[4]); // As 1st in set            // ""

    // SET 4                    // PREDICTIONS              // ACTUAL
    printf("x = %i\n", x);      // As expected              // ""
    printf(format, x);          // Unknown, as line 29      // Works, precedence left 2 right and string subsitution, like in tcl.

    return 0;
}
