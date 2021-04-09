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
// Description    : Creating a sort3 function using only pointers
// Concepts       : With Exchange nothing is lost
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>


void sort (int *p1, int n, bool asc)
{
    void exchange(int * const pint1, int * const pint2);
    // Can I do this without array end? Like char while loop shown in 
    // exercise 11.14
    int * const arrayEnd = p1 + n;
    int *p2;

    for (; p1 < arrayEnd-1; ++p1)
        for (p2 = p1+1; p2 <arrayEnd; ++p2)
            if ((asc) ? *p1 > *p2 : *p1 < *p2)
                    exchange(p1, p2);
    
}

void sort3(int *p1, int *p2, int *p3)
{
    void exchange(int * const pint1, int * const pint2);
    if (*p1 > *p2)
        exchange(p1, p2);
    if (*p1 > *p3)
        exchange(p1, p3);
    if (*p2 > *p3)
        exchange(p2, p3);
}

void exchange(int * const pint1, int * const pint2)
{
    int temp;
    temp = *pint1;
    *pint1 = *pint2;
    *pint2 = temp;
}

void printArray(int a[], int n)
{
    int i;
    for (i=0; i<n; ++i)
        printf ("%i    ", a[i]);
    printf("\n");
    printf("\n");
}


int main(void)
{

    void sort3(int *p1, int *p2, int *p3);
    int i1 = 123, i2 = 231, i3 = 30;
    printf("Oringinal %i, %i, %i\n", i1, i2, i3);
    sort3(&i1, &i2, &i3);
    printf("Sorted %i, %i, %i\n", i1, i2, i3);
    
    return 0;
}
