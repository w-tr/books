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
// Description         : Displaying multiple values
// Concepts introduced : The printf statement can take multiple format 
//                     : specifiers, and the subsitutions values can be placed
//                     : in an ordered list after the text string to be 
//                     : displayed.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    int sum, value1, value2;

    value1 = 50;
    value2 = 25;
    sum = value1 + value2;
    printf("The sum of %i and %i is %i\n", value1, value2, sum);

    return 0;

}
