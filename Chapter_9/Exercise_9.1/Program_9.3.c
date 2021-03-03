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
// Description    : Revising Program_9.2 to look for leap years
// Concepts       : Function taking argument of struct type, not just member.
//                : Struct defined globally.
// Note           : Question arising, can a function return a struct type?
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

int main(void)
{
    struct date today, tomorrow; 
    int numberOfDays (struct date d); 


    printf("Enter today's date (mm dd yyyy) : ");
    scanf("%i%i%i", &today.month, &today.day, &today.year);

    // check day limit in month
    if (today.day != numberOfDays(today))
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

