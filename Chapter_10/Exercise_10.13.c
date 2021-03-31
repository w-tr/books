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
// Description    : Creating an uppercase function
// Concepts       : 1. Get string
//                : 2. Iterate through checking if char is lower
//                : 3. When isLower then set to upper
//                : 4. Output results
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>

char setChar2Upper(const char c)
{
    return c -'a' + 'A';
}
bool isLower(const char c)
{
    if ( c >= 'a' && c <= 'z')
        return true;
    else
        return false;
}

void setString2Upper (char c[])
{
    for (int i=0; c[i] != '\0'; i++)
        if (isLower(c[i]))
            c[i] = setChar2Upper(c[i]);
}

int main(void)
{
    char text[81];

    printf("Type in your text.\n");
    gets(text);
    setString2Upper(text);
    printf("%s\n", text);

    return 0;
}
