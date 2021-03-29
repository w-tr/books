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
// Description    : Edit program 8.12 to allow sort order ascend/descend to be
//                :     specified.
// Concepts       : Condition determines placement, same algorithm (moving to 
//                :     top of array), however implemented when greater/less 
//                :     than will make it ascend or descend. Used condintional
//                :     operator.
//                : Win operating systems, detect matric manipulation like 
//                :     this and assume it's a virus. win/Emotet
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>

void sort (int a[], int n, bool asc)
{
    int i, j, temp;
    int condition_true = 0;

    for (i=0; i<n-1; ++i)
        for (j=i+1; j<n; ++j)
            // Vs thinks this decision is a virus 
            if ((asc) ? a[i] > a[j] : a[i] < a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            // // Alternative could be 
            // if (asc) 
            // {
            //     if (a[i] > a[j])
            //     {
            //         temp = a[i];
            //         a[i] = a[j];
            //         a[j] = temp;
            //     }
            // }
            // else
            // {
            //     if (a[i] < a[j])
            //     {
            //         temp = a[i];
            //         a[i] = a[j];
            //         a[j] = temp;
            //     }
            // }
}

int main(void)
{
    void sort (int a[], int n, bool asc);

    int i;
    int array[16];
    const int cArray[16] = {
                                  34 , -5 , 6  , 0  , 12 , 100 , 56 , 22 ,
                                  44 , -3 , -9 , 12 , 17 , 22  , 6  , 11
    };
        
    // Reset array
    for (i=0; i<16;++i)
        array[i] = cArray[i];


    printf("The array before the sort : \n");
    for (i=0; i<16; ++i)
        printf ("%i    ", array[i]);
    printf("\n");
    printf("\n");

    printf("The array after ascending sort : \n");
    sort (array, 16, true); // funct call
    for (i=0; i<16; ++i)
        printf ("%i    ", array[i]);
    printf("\n");

    // Reset array
    for (i=0; i<16;++i)
        array[i] = cArray[i];

    printf("The array before the sort : \n");
    for (i=0; i<16; ++i)
        printf ("%i    ", array[i]);
    printf("\n");
    printf("\n");

    printf("The array after descending sort : \n");
    sort (array, 16, false); // funct call
    for (i=0; i<16; ++i)
        printf ("%i    ", array[i]);
    printf("\n");

    return 0;
}
