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
// Description    : Converting any number. This is understood to mean more than
//                :     the one request for a number, rather than any base. 
//                :     Furthermore this is built ontop of Exercise 8_15
// Concepts       : A state machine that limits user from entering incorrect 
//                :     values and has to explicitly tell it to exit.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

// Global variables below
int gConvertedNumber[64];
long int gNumberToConvert;
int gBase;
int gDigit=0;

void getNumberAndBase (void)
{
    printf("Please enter the number to be converted : ");
    scanf("%li", &gNumberToConvert);
    // TODO terminate on 0 instead of asking for base

    do
    { 
        printf("Please enter the base : ");
        scanf("%i", &gBase);
        if (gBase <2 || gBase > 16)
            printf("Error incorrect base range!\n");
    } while (gBase <2 || gBase > 16);
}

void convertNumber (void)
{
    do {
        gConvertedNumber[gDigit] = gNumberToConvert % gBase;
        ++gDigit;
        gNumberToConvert /= gBase;
    } while (gNumberToConvert != 0);
}

void displayConvertedNumber (void)
{
    const char baseDigits[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int nextDigit;

    printf("Converted number = ");
    for (--gDigit; gDigit >=0; --gDigit)
    {
        nextDigit = gConvertedNumber[gDigit];
        printf("%c", baseDigits[nextDigit]);
    }
    printf("\n");
}

int main(void)
{
    void displayConvertedNumber (void), convertNumber (void), getNumberAndBase (void);
    // loop through allowing any number
    while (1) 
    {
        getNumberAndBase();
        if (gNumberToConvert == 0)
        {
            printf("Number to convert is zero, terminating program");
            //break; // or return 0?
            return 0;
        }

        convertNumber();
        displayConvertedNumber();
    }
    return 0;
}
