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
// Description    : Changing Array Elements in Functions
// Concepts       : Where an function input parameter is a single simple 
//                :     variable the actual content of the input is copied and 
//                :     used locally. However when an array is supplied the 
//                :     content of array is not copied and used locally. RATHER 
//                :     a pointer is used to redirect to the data values. This 
//                :     is why the array is updated in the function.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h> 

void multiplyBy2 (float array[], int n)
{

    int i;
    for (i=0; i<n; ++i)
        array[i] *= 2;

}

int main(void)
{
    float floatVal[4] = { 1.2f, -3.7f, 6.2f, 8.55f };
    int i;
    void multiplyBy2 (float array[], int n);

    multiplyBy2(floatVal, 4);

    for (i = 0; i<4; ++i)
        printf("%.2f    ", floatVal[i]);

    printf("\n");

    return 0;
}
