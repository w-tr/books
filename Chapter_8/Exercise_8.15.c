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
// Description    : Edit of Program_8.14, converting base
// Concepts       : 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// Convert a positive integer to a another base using GLOBAL variables

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
    getNumberAndBase();
    convertNumber();
    displayConvertedNumber();
    return 0;
}
