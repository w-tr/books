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
// Description    : Demonstrating an Array of Counters
// Concepts       : Using array index and elements for a keeping a count of 
//                :   grades, therefore n+1 elements for indexing (overcome the
//                :   zero)
//                : Constraining the inputs to a range that represents index
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    int ratingCounters[11], i, response;

    // Initialising an array
    for (i = 1; i <= 10; ++i)
        ratingCounters[i] = 0;

    printf("Enter your response\n");

    for (i=1; i <= 20; ++i)
    {
        scanf("%i", &response);


        if (response < 1 || response > 10)
            // Not this does not prevent increment of i, so
            // if you hit this 20 times you get no values in 
            // ratingCounters
            printf("Bad response: %i\n", response);
        else
            ++ratingCounters[response]; // inc value in this index
    }

    printf("\n\nRating \t Number of Responses\n");
    printf("------ \t -------------------\n");

    for (i=1; i<= 10; ++i)
        printf("%4i\t%14i\n", i, ratingCounters[i]);

    return 0;

}
