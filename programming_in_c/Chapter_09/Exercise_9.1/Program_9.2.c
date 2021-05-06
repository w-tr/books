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
// Description    : Determining Tomorrow's Date
// Concepts       : Structures can be used in expersions.
//                : Priority if statement used to determine action.
// Note           : This doesn't check leap years. Also you can break it
//                :     by exceeding the number of days per month. Which is 
//                :     always possible when humans are inputing data.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    struct date
    {
        int month;
        int day;      // Americans and the wrong order :(
        int year;
    };
    
    // Notice that the type declaration is struct structname
    //     Where int or bool or char is the "struct structname" equivilant.
    struct date today, tomorrow; 

    const int daysPerMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Enter today's date (mm dd yyyy) : ");
    scanf("%i%i%i", &today.month, &today.day, &today.year);

    // check day limit in month
    if (today.day != daysPerMonth[today.month])
    {
        tomorrow.day    =  today.day + 1;
        tomorrow.month  =  today.month;
        tomorrow.year   =  today.year;
    }
    // check end of year
    else if (today.month == 12) 
    {
        tomorrow.day    =  1;
        tomorrow.month  =  1;
        tomorrow.year   =  today.year+1;
    }
    // Assume its just a month iteration.
    else
    {
        tomorrow.day    =  1;
        tomorrow.month  =  today.month+1;
        tomorrow.year   =  today.year;
    }

    printf("Tomorrow's date is %i/%i/%.2i.\n", tomorrow.month, tomorrow.day, tomorrow.year % 100);

    return 0;
}
