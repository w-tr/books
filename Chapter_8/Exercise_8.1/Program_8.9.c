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
// Description    : Finding the Minimum Value in an Array
// Concepts       : An array being supplied to a function
//                : A hardwired range/dimeninsion for function.
//                : Return of single type not array
//                : prototype declaration
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int minimum (int values[10])
{
    int minVal, i;
    minVal = values[0];

    for (i=0; i<10; ++i)
        if (values[i] < minVal)
            minVal = values[i];

    return minVal;
}

int main(void)
{
    int scores[10], i, minScore;
    int minimum(int values[10]); // Example of prototype declaration/think vhdl component black boxing

    printf("Enter 10 scores\n");
    for (i=0; i<10; ++i)
        scanf("%i", &scores[i]);

    minScore = minimum(scores);
    printf("\n Min score is %i\n", minScore);

    return 0;
}
