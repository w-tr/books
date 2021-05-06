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
// Description    : Using enum type in a function.
// Concepts       : 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

enum month { january = 1, february, march, april, may, june,
             july, august, september, october, november, december };
// could remove "" or could remove january = 1.
const char *months[] = { "", "january", "february", "march", "april", "may", "june",
    "july", "august", "september", "october", "november", "december" };

//function
char * monthName(enum month aMonth)
{
    return months[aMonth];
}

int main(void)
{
    char * monthName(enum month aMonth);
    printf("%s\n", monthName(january));
    printf("%s\n", monthName(february));
    printf("%s\n", monthName(march));
    printf("%s\n", monthName(april));
    printf("%s\n", monthName(may));
    printf("%s\n", monthName(june));
    printf("%s\n", monthName(july));
    printf("%s\n", monthName(august));
    printf("%s\n", monthName(september));
    printf("%s\n", monthName(october));
    printf("%s\n", monthName(november));
    printf("%s\n", monthName(december));
    return 0;
}
