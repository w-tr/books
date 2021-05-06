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
// Description    : Converting a String to its Integer Equivalent with "-" 
//                :    condition taken into account.
// Concepts       : 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>

int str2int (const char str[])
{
    int i, intVal, result = 0;
    bool isNeg = false;
    int startNum = 0;

    if (str[0] == '-')
    {
        isNeg = true;
        startNum = 1;
    }

    for (i=startNum; str[i] >= '0' && str[i] <= '9'; ++i)
    {
        intVal = str[i] - '0'; // Removes numerical offset
        result = result * 10 + intVal; // shift left and add.
    }

    if (isNeg)
        return result*-1;
    else
        return result;
}

int main(void)
{
    int str2int (const char str[]);

    printf("%i\n", str2int("245"));
    printf("%i\n", str2int("100")+25);
    printf("%i\n", str2int("13x5")); // if alphanumeric then exits loop.
    printf("%i\n", str2int("-245"));
    printf("%i\n", str2int("-100")+25);
    printf("%i\n", str2int("-13x5")); // if alphanumeric then exits loop.

    return 0;
}
