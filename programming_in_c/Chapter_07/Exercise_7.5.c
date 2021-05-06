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
// Description    : What does the following do?
// Concepts       : Reading and understanding code before compiling. In this 
//                :    instance it involves a nested loop.
// Conclusions    : It sums the previous sequence, which generates a 
//                :    2^(n-1) count
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    // initialised array
    int num[10] = {1, 0, 0, 0, 0, 0, 0 , 0, 0, 0};
    int i, j;

    for (j=0; j<10; j++)
    {
        for (i=0; i<j; i++)
        {
            num[j] += num[i];
            // printf("num[i] or [%i] = %i\n", i, num[i]);
        }
        printf("num[j] or [%i] = [%i]\n", j, num[j]);
    }

    for (j = 0; j <10; j++)
        printf("%i   ", num[j]);

    printf("\n");
    return 0;
}
