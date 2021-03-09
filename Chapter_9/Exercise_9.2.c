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

int main(void)
{
    struct date day1; 
    struct date day2; 
    struct date getDate(void);

    day1 = getDate();
    day2 = getDate();

    printf("Day1 day = %.2i\n",day1.day);
    printf("Day1 month = %.2i\n",day1.month);
    printf("Day1 year = %i\n",day1.year);
    printf("day2 day = %.2i\n",day2.day);
    printf("day2 month = %.2i\n",day2.month);
    printf("day2 year = %i\n",day2.year);

    struct date day3 = { 9, 23, 1987}; 
    printf("day3 month = %.2i\n",day3.month);
    printf("day3 day = %.2i\n",day3.day);
    printf("day3 year = %i\n",day3.year);
    //printf("Day1 date is %.2i/%.2i/%i.\n", day1.month, day1.day, day1.year);
    /*printf("Day2 date is %i/%i/%.2i.\n", day2.month, day2.day, day2.year % 100);*/
    return 0;
}

