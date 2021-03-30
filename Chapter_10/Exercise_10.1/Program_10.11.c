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
// Description    : Converting a String to its Integer Equivalent
// Concepts       : A character symbol is essentially a number associated with 
//                :     ascii lookup. Knowledge about this allows for user to 
//                :     offset things back to numbers using operators and char 
//                :     symbols.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int str2int (const char str[])
{
    int i, intVal, result = 0;

    for (i=0; str[i] >= '0' && str[i] <= '9'; ++i)
    {
        intVal = str[i] - '0'; // Removes numerical offset
        result = result * 10 + intVal; // shift left and add.
    }

    return result;
}

int main(void)
{
    int str2int (const char str[]);

    printf("%i\n", str2int("245"));
    printf("%i\n", str2int("100")+25);
    printf("%i\n", str2int("13x5")); // if alphanumeric then exits loop.

    return 0;
}
