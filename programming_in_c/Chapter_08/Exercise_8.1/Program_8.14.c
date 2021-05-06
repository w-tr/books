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
// Description    : Convert a Positive Integer to a Another Base
// Concepts       : Global Variables shared accross multiple functions.
//                : Functions now have a DEPENDANCY on that global variable 
//                :     exisiting. They are no longer general, now bespoke.
//                : Global var including arrays all default to 0 in elements.
// Advice         : Use nameing convention with prefix g.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

// Global variables below
int convertedNumber[64];
long int numberToConvert;
int base;
int digit=0;

void getNumberAndBase (void)
{
    printf("Please enter the number to be converted : ");
    scanf("%li", &numberToConvert);

    printf("Please enter the base : ");
    scanf("%i", &base);

    if (base <2 || base > 16) 
    {
        printf("Bad Base - must be between 2 and 16, will default to 10\n");
        base = 10;
    }
}

void convertNumber (void)
{
    do {
        convertedNumber[digit] = numberToConvert % base;
        ++digit;
        numberToConvert /= base;
    } while (numberToConvert != 0);
}

void displayConvertedNumber (void)
{
    const char baseDigits[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int nextDigit;

    printf("Converted number = ");
    for (--digit; digit >=0; --digit)
    {
        nextDigit = convertedNumber[digit];
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
