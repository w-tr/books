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
// Description    : Updating the Time by One Second
// Concepts       : Scanf with criteria on input method.
//                : Function returning the argument, after manipulation.
//                : Examples of operations on members of a structure ++ prefix
//                :     as in ++a whereas now.seconds++ is a++
//                : An example of a cascading if statement
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
    struct time currentTime, nextTime;

    printf("Enter the time (hh:mm:ss): ");
    scanf("%i:%i:%i", &currentTime.hour, &currentTime.minutes, &currentTime.seconds);

    nextTime = timeUpdate(currentTime);

    printf("Updated time is %.2i:%.2i:%.2i.\n", nextTime.hour, nextTime.minutes, nextTime.seconds);

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
