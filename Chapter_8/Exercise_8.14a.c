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
// Description    : Editted version of Exercise 8.10 to use global variables
// Concepts       : Same as Exercise_8.10 with addition of global variables
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>
#include <stdio.h>

int prime;
int n;

void primef(void)
{
    // int prime = 1;
    prime = 1;

    // Condition to iterate as long as AND operation returns positive
    // Alternatively chould insert break into mod return 0;
    for (int i = 2; prime && i <= n / 2; ++i)
    {
        if (n % i == 0)
            prime = 0; //Forces the program to exit loop.
    }

    // return prime;
}

int main(void)
{
    void primef(void);
    //int n;
    printf("Please enter number to check :");
    scanf("%i", &n);
    primef();
    if (prime)
        printf("Number is prime");
    else
        printf("Number is NOT prime");

    return 0;
}
