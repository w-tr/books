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
// Description    : Working with gdb
// Concepts       : Using step through, continue etc 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdlib.h>

struct date {
    int day;
    int month;
    int year;
};

struct date foo (struct date x) {
    ++x.day;
    return x;
}

int main(void)
{
    struct date today = {11, 10, 2004};
    int array[5] = {1, 2, 3, 4, 5};
    struct date *newDate, foo();
    char *string = "test string";
    int i=3;

    newDate = (struct date *) malloc (sizeof (struct date));
    newDate -> day = 15;
    newDate -> month = 11;
    newDate -> year = 2004;

    today = foo(today);

    free (newDate);

    return 0;
}

