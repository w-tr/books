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
// Description    : A function that returns the sum of an array.
// Concepts       : Looping through an unconstrained array dimension using an
//                :     argument to specify number of elements
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int arraySum ( int intArray[], int noOfElements)
{
    int sum = 0;
    int i;
    for (i = 0; i<noOfElements; ++i)
        sum+=intArray[i];

    return sum;
}

int main(void)
{
    int array1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int elements1 = 10;
    int array2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int elements2 = 20;

    printf("Sum of array 1 = %i\n", arraySum(array1, elements1));
    printf("Sum of array 2 = %i\n", arraySum(array2, elements2));
    return 0;
}
