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
// Description    : Finding the number of elapsed days between two dates.
// Concepts       : 
// NOTE           : The textbook is wrong on the dates
//                :     day1 = (struct date) {8, 8, 2004};
//                :     day2 = (struct date) {22, 2, 2005};
//                : giving 202. He must have made a mistake on day figure.
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
    if (month <= 2)
        return year-1;
    else
        return year;
}

int g(int month) 
{
    if (month <= 2)
        return month+13;
    else
        return month+1;
}
    
int getN(struct date theDate)
{
    int f(int year, int month);
    int g(int month);
    int sum;
    sum = (1461 * f(theDate.year, theDate.month) / 4) + (153 * g(theDate.month) / 5) + theDate.day;
    if (theDate.year >= 1800 && theDate.year <= 1900)
        if (theDate.month >= 3)
            if (theDate.day => 1)
    return sum;
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
    int getN(struct date theDate);

    //day1 = getDate();
    //day2 = getDate();
    day1 = (struct date) {8, 8, 2004};
    day2 = (struct date) {22, 2, 2005};
    printf("Result for day1 = %i\n", getN(day1));
    printf("Result for day2 = %i\n", getN(day2));
    printf("The number of days between the dates is %i\n", diff(getN(day1), getN(day2) ) );
    return 0;
}
