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
// Description    : Pointer arugment to update date structure.
// Concepts       : Pointers as arguments
//                : Indirection on line 33 for non pointer input.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>

// pg 241
struct date
{
    int day;
    int month;
    int year;
};

//prog 9.4, edited, dateUpdate doesn't return a value
void dateUpdate (struct date *today)
{
    int numberOfDays (struct date d); 

    // check day limit in month
    if (today->day != numberOfDays(*today))
    {
        today->day++;
    }
    // check end of year
    else if (today->month == 12) 
    {
        today->day = 1;
        today->month = 1;
        today->year++;
    }
    // Assume its just a month iteration.
    else
    {
        today->day = 1;
        today->month++;
    }

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

    struct date *datePtr;
    struct date today;
    datePtr = &today;

    printf("-------Day Tickover-----------------\n");
    today.day = 1; today.month = 1; today.year = 2003;

    printf("Todays date    : %i/%i/%i\n", datePtr->day, datePtr->month, datePtr->year);
    dateUpdate(datePtr);
    printf("Tomorrows date : %i/%i/%i\n", datePtr->day, datePtr->month, datePtr->year);

    printf("------Month Tickover----------------\n");
    today.day = 31; today.month = 1; today.year = 2003;

    printf("Todays date    : %i/%i/%i\n", datePtr->day, datePtr->month, datePtr->year);
    dateUpdate(datePtr);
    printf("Tomorrows date : %i/%i/%i\n", datePtr->day, datePtr->month, datePtr->year);

    printf("------Year Tickover-----------------\n");
    today.day = 31; today.month = 12; today.year = 2003;

    printf("Todays date    : %i/%i/%i\n", datePtr->day, datePtr->month, datePtr->year);
    dateUpdate(datePtr);
    printf("Tomorrows date : %i/%i/%i\n", datePtr->day, datePtr->month, datePtr->year);

    printf("------Leap Year Feb Tickover--------\n");
    today.day = 28; today.month = 2; today.year = 2004;

    printf("Todays date    : %i/%i/%i\n", datePtr->day, datePtr->month, datePtr->year);
    dateUpdate(datePtr);
    printf("Tomorrows date : %i/%i/%i\n", datePtr->day, datePtr->month, datePtr->year);

    printf("------Leap Year Feb Tickover2-------\n");

    printf("Todays date    : %i/%i/%i\n", datePtr->day, datePtr->month, datePtr->year);
    dateUpdate(datePtr);
    printf("Tomorrows date : %i/%i/%i\n", datePtr->day, datePtr->month, datePtr->year);

    printf("------Non Leap Year Feb Tickover----\n");
    today.day = 28; today.month = 2; today.year = 2002;

    printf("Todays date    : %i/%i/%i\n", datePtr->day, datePtr->month, datePtr->year);
    dateUpdate(datePtr);
    printf("Tomorrows date : %i/%i/%i\n", datePtr->day, datePtr->month, datePtr->year);

    return 0;

}
