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
// Description    : Illustrating a Structure
// Concepts       : Defining a structure and declaring a variable to the 
//                :     structure. It's similar to records in VHDL
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
    struct date today; 

    today.month  =  9;
    today.day    =  25;
    today.year   =  2004;

    printf("Today's date is %i/%i/%.2i.\n", today.month, today.day, today.year % 100);

    return 0;
}

