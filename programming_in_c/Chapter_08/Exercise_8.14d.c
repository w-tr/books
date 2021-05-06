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
// Description    : Edited Exercise_8.13 to include global variables.
// Concepts       : 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>

// global variable
int gArray[16];
const int cArray[16] = {
                              34 , -5 , 6  , 0  , 12 , 100 , 56 , 22 ,
                              44 , -3 , -9 , 12 , 17 , 22  , 6  , 11
};
int gN;

void sort (bool asc)
{
    int i, j, temp;
    int condition_true = 0;

    for (i=0; i<gN-1; ++i)
        for (j=i+1; j<gN; ++j)
            // Vs thinks this decision is a virus 
            if ((asc) ? gArray[i] > gArray[j] : gArray[i] < gArray[j])
                {
                    temp = gArray[i];
                    gArray[i] = gArray[j];
                    gArray[j] = temp;
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
    void sort (bool asc);

    int i;
    gN = 16;
    // int array[16];
    // const int cArray[16] = {
    //                               34 , -5 , 6  , 0  , 12 , 100 , 56 , 22 ,
    //                               44 , -3 , -9 , 12 , 17 , 22  , 6  , 11
    // };
        
    // Reset array
    for (i=0; i<16;++i)
        gArray[i] = cArray[i];


    printf("The array before the sort : \n");
    for (i=0; i<16; ++i)
        printf ("%i    ", gArray[i]);
    printf("\n");
    printf("\n");

    printf("The array after ascending sort : \n");
    sort (true); // funct call
    for (i=0; i<16; ++i)
        printf ("%i    ", gArray[i]);
    printf("\n");

    // Reset array
    for (i=0; i<16;++i)
        gArray[i] = cArray[i];

    printf("The array before the sort : \n");
    for (i=0; i<16; ++i)
        printf ("%i    ", gArray[i]);
    printf("\n");
    printf("\n");

    printf("The array after descending sort : \n");
    sort (false); // funct call
    for (i=0; i<16; ++i)
        printf ("%i    ", gArray[i]);
    printf("\n");

    return 0;
}
