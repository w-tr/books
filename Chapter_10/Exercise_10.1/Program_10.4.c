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
// Description    : Testing Strings for Equality
// Concepts       : Comparisons with equality operator cannot be done on a
//                :     string. Instead it has to done single simple variable
//                :     types.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>

bool equalStr (const char s1[], const char s2[])
{
    int i = 0;
    bool areEqual;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        ++i;

    if (s1[i] == '\0' && s2[i] == '\0')
        areEqual = true;
    else 
        areEqual = false;

    return areEqual;
}

int main(void)
{
    bool equalStr (const char s1[], const char s2[]);
    const char stra[] = "string compare test";
    const char strb[] = "string";

    printf("%i\n", equalStr(stra, strb));
    printf("%i\n", equalStr(stra, stra));
    printf("%i\n", equalStr(strb, "string"));

    return 0;
}
