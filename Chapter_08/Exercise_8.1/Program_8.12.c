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
// Description    : Sorting an Array of Integers into Ascending Order
// Concepts       : Nothing new, just a combination of nested loops to update 
//                :     elements within an array.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

void sort (int a[], int n)
{
    int i, j, temp;

    for (i=0; i<n-1; ++i)
        for (j=i+1; j<n; ++j)
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

int main(void)
{
    int i;
    int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22, 
                      44, -3, -9, 12, 17, 22, 6, 11};

    void sort (int a[], int n);

    printf("The array before the sort : \n");
    for (i=0; i<16; ++i)
        printf ("%i    ", array[i]);
    printf("\n");
    printf("\n");

    printf("The array after the sort : \n");
    sort (array, 16); // funct call
    for (i=0; i<16; ++i)
        printf ("%i    ", array[i]);
    printf("\n");

    return 0;
}
