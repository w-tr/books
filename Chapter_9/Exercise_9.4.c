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
// Description    : Working out the day for the date
// Concepts       : 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

struct date
{
    int day;      
    int month;
    int year;
};

struct date getDate(void)
{
    struct date theDate;
    printf("Enter a date (dd mm yyyy) :\n");
    scanf("%d %d %d", &theDate.day, &theDate.month, &theDate.year);
    return theDate;
}

int f(int year, int month)
{
    return (month <= 2) ? year-1 : year;
}

int g(int month) 
{
    return (month <= 2) ? month+13 : month+1;
}
    
int getN(struct date theDate)
{
    int f(int year, int month);
    int g(int month);
    int whichCentury(struct date d);
    int sum;
    sum = (1461 * f(theDate.year, theDate.month) / 4) + (153 * g(theDate.month) / 5) + theDate.day;

    //return sum;
    return sum+whichCentury(theDate);
}

//FIXME, somethings not linking up with https://www.timeanddate.com/date/durationresult.html?d1=8&m1=8&y1=1710&d2=22&m2=2&y2=2005
int whichCentury(struct date d)
{
    if (d.year >= 1900)
        if ((d.year == 1900) && (d.month < 3))
            return 1;
        else
            return 0;
    else if (d.year >= 1800)
        if ((d.year == 1800) && (d.month < 3))
            return 2;
        else
            return 1;
    else if (d.year >=1700)
        if ((d.year == 1700) && (d.month < 3))
            return 0;
        else
            return 2;
    else 
        return 0;
}


int abs(int a)
{
    if (a < 0)
        return -a;
    else
        return a;
}

int diff(int a, int b)
{
    int abs(int a);
    return abs(a - b);
}

int main(void)
{
    struct date day1; 
    struct date day2; 
    struct date getDate(void);
    struct sDay {
        char day[9];
    };
    struct sDay daysOfWeek[] = 
    {
        {"Sunday"},
        {"Monday"},
        {"Tuesday"},
        {"Wednesday"},
        {"Thursday"},
        {"Friday"},
        {"Saturday"}
    };
    struct sDay ugensDage[] = 
    {
        {"Soendag"},
        {"Mandag"},
        {"Tirsdag"},
        {"Onsdag"},
        {"Torsdag"},
        {"Fredag"},
        {"Loedag"}
    };

    int getN(struct date theDate);
    const int cSubtract = 621049;
    int day1_in_week;
    int day2_in_week;

    day1 = getDate();
    day1_in_week = (getN(day1) - cSubtract) % 7;
    day2 = getDate();
    day2_in_week = (getN(day2) - cSubtract) % 7;
    printf("Day1 = %s\n", daysOfWeek[day1_in_week].day);
    printf("Day2 = %s\n", daysOfWeek[day2_in_week].day);
    printf("Day1 = %s\n", ugensDage[day1_in_week].day);
    printf("Day2 = %s\n", ugensDage[day2_in_week].day);

    //printf("The number of days between the dates is %i\n", diff(getN(day1), getN(day2) ) );
    return 0;
}
