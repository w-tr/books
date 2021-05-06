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
// Description    : Using Pointers to Exchange Values
// Concepts       : The exchange(&i2, &i1) creates pointers on the spot.
//                : Pointers into a function like this allows the function to 
//                :     return more than one update. Where a function can only 
//                :     return one variable through the "return" commands.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

void exchange(int * const pint1, int * const pint2)
{
    int temp;
    temp = *pint1;
    *pint1 = *pint2;
    *pint2 = temp;
}

int main(void)
{

    void exchange(int * const pint1, int * const pint2);
    int i1 = -5, i2 = 66, *p1 = &i1, *p2 = &i2;
    printf("i1 = %i, i2 = %i\n", i1, i2);

    exchange(p1, p2);
    printf("i1 = %i, i2 = %i\n", i1, i2);

    exchange(&i1, &i2);
    printf("i1 = %i, i2 = %i\n", i1, i2);

    return 0;
}
