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
// Description    : Modify Program 8.4 and implement as per Program 5.5
// Concepts       : The return of a function.
//                : A loop calling a function.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int calcTriNum (int n)
{
    int i, triNum=0;

    for (i=1; i<=n; ++i)
        triNum += i;
    // Modified version of Program 8.4
    return triNum;
}

int main(void)
{
    int calcTriNum (int n);
    int number, counter;

    // Embedded the loop from Program 5.5
    for (counter = 1; counter <= 5; ++counter)
    {

        printf("What triangular number do you want to calculate? ");
        scanf("%i", &number);

        printf("TriangularNumber %i is %i\n", number, calcTriNum(number));
    }

    return 0;
}
