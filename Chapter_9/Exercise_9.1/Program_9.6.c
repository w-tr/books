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
// Description    : Illustrating Arrays of Structures
// Concepts       : A struct type can exist in an array of itself.
//                : Initialisation & declaration is similar to 2d arrays.
//                : pinpointing an item is by index, and member element.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>

// Global variable/type definition
struct time
{
    int hour;
    int minutes;      
    int seconds;
};


int main(void)
{
    struct time timeUpdate (struct time now);
    struct time testTimes[5] = 
    { {11, 59, 59}, {12, 0, 0}, {1, 29, 59}, {23, 59, 59}, {19, 12, 27} };
    struct time dummyTimes[5];
    int i;

    for (i = 0; i < 5; ++i) 
    {
        printf("Time is %.2i:%.2i:%.2i.\n", testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
        testTimes[i] = timeUpdate(testTimes[i]);
        printf("Updated time is %.2i:%.2i:%.2i.\n", testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
    }

    return 0;
}

struct time timeUpdate (struct time now)
{
    ++now.seconds;

    // check second limit
    if (now.seconds == 60)
    {
        now.seconds = 0;
        ++now.minutes;

        if (now.minutes == 60)
        {
            now.minutes = 0;
            ++now.hour;
            
            if (now.hour == 24)
                now.hour = 0; //midnight
        }
    }

    return now;
}
