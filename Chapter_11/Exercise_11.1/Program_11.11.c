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
// Description    : Working with Pointers to Arrays
// Concepts       : A pointer to an array defaults to the [0] position.
//                : A sum thereafter onto the pointer is an offset from that 
//                :     position. So 
//                :     ptr = array is same as ptr = &array[0]
//                :     ++ptr is same as ptr = ptr + offset of 1.
//                :         which could be seen as ptr = &array[0+1]
//                : Access to the pointer content is achieve by the *
//                :     *ptr is used to access where pointer is.
//                :         array[0] then array[1] etc.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int arraySum(int array[], const int n)
{
    int sum = 0, *ptr;
    int * const arrayEnd = array + n; // provided the n is correct lol.

    for (ptr = array; ptr < arrayEnd; ++ptr)
        sum += *ptr; // notice the *

    return sum;
}

int main(void)
{

    int arraySum(int array[], const int n);

    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

    printf("The sum is %i\n", arraySum(values, 10));

    return 0;

}
