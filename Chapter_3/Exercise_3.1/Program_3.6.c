//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//    ____ ___   __    _               
//   / __// o |,'_/  .' \              
//  / _/ / _,'/ /_n / o /   _   __  _    ___  _   _  __
// /_/  /_/   |__,'/_n_/   / \,' /.' \ ,' _/,' \ / |/ /
//                        / \,' // o /_\ `./ o // || / 
//                       /_/ /_//_n_//___,'|_,'/_/|_/ 
//  
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Author              : Wesley Taylor-Rendal (WTR)
// Design history      : Review git logs.
// Description         : Using comments in a program
// Concepts introduced : c allows user comments. These can be either 
//                     :    delimited   (/* */)
//                     :        spanning many lines and they start with
//                     :        /*
//                     :        and they end with 
//                     :        */
//                     :    in line     (//)
//                     :        where everything after // is commented on current
//                     :        line
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

/* This program adds two integer values
 *  and displays the results */

#include <stdio.h>

int main(void)
{
    // Declared values
    int sum, value1, value2;

    // Assignments
    value1 = 50;
    value2 = 25;
    sum = value1 + value2;
    // Display results
    printf("The sum of %i and %i is %i\n", value1, value2, sum);

    return 0;

}
