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
// Description    : Finding the Least Common Multiple (LCM)
// Concepts       : Implementing algorithm >>> lcm = uv/gcd(u,v)
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int gcd(int u, int v)
{
    int temp;
    printf("The gcd of %i and %i is ", u, v);
    while (v != 0)
    {
        temp = u % v;
        u    = v;
        v    = temp;
    }
    return u;
}

int product(int u, int v)
{
    return u*v;
}

int lcm ( int u, int v)
{
    if ((u == 0) || ( v == 0))
    {
        printf("One of the inputs is zero\n");
        return 0;
    } else {
        if (u < 0)
            u = -u;
        if (v < 0)
            v = -v;
        
        return product(u, v)/gcd(u, v);
    }
}

int main(void)
{
    printf("lcm(15, 10) = %i\n", lcm(15, 10));
    printf("lcm(25, 100) = %i\n", lcm(25, 100));
    printf("lcm(15, 10) = %i\n", lcm(15, 10));
    return 0;
}
