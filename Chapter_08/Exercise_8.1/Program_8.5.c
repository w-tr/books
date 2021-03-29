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
// Description    : Revising Program 5.7 to find GCD
// Concepts       : Multiple intput arguments used (order counts)
//                :  - u, v (local var) change in function. thus first printf
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

void gcd(int u, int v)
{
    int temp;

    printf("The gcd of %i and %i is ", u, v);


    while (v != 0)
    {
        temp = u % v;
        u    = v;
        v    = temp;
    }
    printf("%i\n", u);

}

int main(void) 
{
    // printf("Please enter two non negative integers: \n");
    // scanf("%i %i", &u, &v);
    gcd(150, 35);
    gcd(1026, 405);
    gcd(83, 240);
    // printf("The greatest commond divisor is %i\n", u);
    return 0;
}
