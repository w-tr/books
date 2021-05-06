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
// Description    : Building on Exercise 8.13 to develope a sort with pointers
// Concepts       : Using pointer to restructure.
//                : Removing the use of indexing an array
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

    void printArray(int a[], int n);
    void sort (int *p1, int n, bool asc);

    int i;
    int array[16];
    int *p1 = array;
    const int cArray[16] = {
                                  34 , -5 , 6  , 0  , 12 , 100 , 56 , 22 ,
                                  44 , -3 , -9 , 12 , 17 , 22  , 6  , 11
    };
        
    // Reset array
    for (i=0; i<16;++i)
        array[i] = cArray[i];


    printf("The array before the sort : \n");
    printArray(array, 16);

    printf("The array after ascending sort : \n");
    sort (p1, 16, true); // funct call
    printArray(array, 16);

    // Reset array
    for (i=0; i<16;++i)
        array[i] = cArray[i];

    printf("The array before the sort : \n");
    printArray(array, 16);


    printf("The array after descending sort : \n");
    sort (p1, 16, false); // funct call
    printArray(array, 16);

    return 0;
}
