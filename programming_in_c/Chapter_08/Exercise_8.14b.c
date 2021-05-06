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
// Description    : Edit of Exercise_8.11 to include global variables
// Concepts       : This exercise shows how constrictive the use of global 
//                :     variables is. The array is now fixed to array1.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
// Global Var
int g_array1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int g_elements1 = 10;
int g_array2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int g_elements2 = 20;

int arraySum (void)
{
    int sum = 0;
    int i;
    //for (i = 0; i<noOfElements; ++i)
    for (i = 0; i<g_elements1; ++i)
        //sum+=intArray[i];
        sum+=g_array1[i];

    return sum;
}

int main(void)
{
    /*int array1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};*/
    /*int elements1 = 10;*/
    /*int array2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};*/
    /*int elements2 = 20;*/

    printf("Sum of array 1 = %i\n", arraySum());
    /*printf("Sum of array 1 = %i\n", arraySum(array1, elements1));*/
    /*printf("Sum of array 2 = %i\n", arraySum(array2, elements2));*/
    return 0;
}
