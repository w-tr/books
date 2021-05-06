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
// Description    : Finding the GCD and Returning the result
// Concepts       : A function can return a type of value. In this case the 
//                :    integer u is returned.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int gcd(int u, int v)
{
    int temp;

    while (v != 0)
    {
        temp = u % v;
        u    = v;
        v    = temp;
    }

    return u;

}

int main(void) 
{
    int result;
    result = gcd(150, 35);
    printf("The gcd of 150 and 35 is %i\n", result);
    result = gcd(1026, 405);
    printf("The gcd of 1026 and 405 is %i\n", result);
    result = gcd(83, 240);
    printf("The gcd of 83 and 240 is %i\n", result);
    return 0;
}
