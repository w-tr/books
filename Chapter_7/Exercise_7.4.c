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
// Description    : Calculate the average of 10 floating point numbers.
// Concepts       : 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    float avg_array[10], sum, avg;
    int i;

    // init array
    for (i=0; i<10; i++)
        avg_array[i] = 0;

    // load array
    for (i=0; i<10; i++)
    {
        printf("Please enter an floating value: ");
        scanf("%f", &avg_array[i]); 
        // if this was a serious program
        // i'd introduce constraints to see a number is entered.
        sum += avg_array[i];
    }

    avg = sum/10;

    printf("The sum of the numbers entered is %f     : ", sum);
    printf("The average of the numbers entered is %f : ", avg);

    return 0;
}
