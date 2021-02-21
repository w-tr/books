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
// Description    : Edit Program 7.2. to allow any number of responses to be 
//                :    entered
// Concepts       : Infinite loop.
//                : The break condition.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    int ratingCounters[11], i, response;

    // Initialising an array
    for (i = 1; i <= 10; ++i)
        ratingCounters[i] = 0;

    printf("Enter your response\n");

    // Could use a do while loop for 999 escape. However simplest method is below
    // delete escape condition for for loop makes it infinite
    for (i=1; ; ++i)
    {
        scanf("%i", &response);

        // escape condition
        if (response == 999)
            break; 

        if (response < 1 || response > 10)
            // Note this does not prevent increment of i
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
