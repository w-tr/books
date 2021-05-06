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
// Description    : Convert positive integer to another base
// Concepts       : Indexing a constant - in other words a look up table.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    const char baseDigits[16] = {
        '0', '1', '2', '3', '4', '5', '6', '7', '8', 
        '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    
    int convertedNumber[64];
    long int numberToConvert;
    int nextDigit, base, index=0;

    //get number and base
    printf("Number to be converted?\n");
    scanf("%i", &numberToConvert);
    printf("Base? ");
    scanf("%i", &base);

    // Convert to the indicated base
    do {
        convertedNumber[index] = numberToConvert % base;
        ++index;
        numberToConvert /= base;
    } while (numberToConvert != 0);

    // Display result in reverse order.
    printf("The converted number is ");
    
    // decrement index prior to loop.
    for (--index; index>=0; --index)
    {
        nextDigit = convertedNumber[index];
        printf("%c", baseDigits[nextDigit]);
    }

    printf("\n");
    return 0;

}
