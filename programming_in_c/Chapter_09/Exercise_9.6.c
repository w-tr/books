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
// Description    : Revised version of Program_9.4
// Concepts       : Struct assignment using compound literals and type casting
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>

// Global variable/type definition
struct date
{
    int month;
    int day;      
    int year;
};

struct date dateUpdate (struct date today)
{
    struct date tomorrow; 
    int numberOfDays (struct date d); 

    // check day limit in month
    if (today.day != numberOfDays(today))
    {
        tomorrow = (struct date) {today.month, today.day + 1,  today.year};
    }
    // check end of year
    else if (today.month == 12) 
    {
        tomorrow = (struct date) {1, 1, today.year+1};
    }
    // Assume its just a month iteration.
    else
    {
        tomorrow = (struct date) {1, today.month+1, today.year};
        // Also you could playce .day=1 and not worry about order.
    }

    return tomorrow;
}

int numberOfDays (struct date d) // why struct date had to be globally declared.
{
    int days;
    bool isLeapYear (struct date d);
    const int daysPerMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear (d) == true && d.month == 2)
        days = 29;
    else 
        days = daysPerMonth[d.month];

    return days;
}

bool isLeapYear(struct date d)
{
    bool leapYearFlag;

    if ( (d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0) )
        leapYearFlag = true;
    else
        leapYearFlag = false;

    return leapYearFlag;
}

int main(void)
{
    struct date dateUpdate (struct date today);
    struct date thisDay, nextDay;

    printf("Enter today's date (mm dd yyyy) : ");
    scanf("%i%i%i", &thisDay.month, &thisDay.day, &thisDay.year);

    nextDay = dateUpdate(thisDay);

    printf("Tomorrow's date is %i/%i/%.2i.\n", nextDay.month, nextDay.day, nextDay.year % 100);

    return 0;
}
