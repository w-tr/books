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
// Description    : 
// Concepts       : 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>

// From Exercise 10.3
void readLine (char buffer[]) 
{
    char character;
    int i=0;

    do
    {
        character = getchar ();
        buffer[i] = character;
        ++i;
    }
    while (character != '\n');

    buffer[i-1] = '\0'; // terminating char
}

// inspired by program 11.14
void readLine2 (char *b) 
{
    char character;

    do
    {
        character = getchar ();
        *b++ = character;      // redirect character into pointer then inc address.:w
    }
    while (character != '\n');

    *b = '\0'; // null
}

int main(void)
{
    char text[81];
    void readLine (char buffer[]) ;
    void readLine2 (char *b) ;

    printf("Type in your text.\n");
    printf("When you are done, please press 'RETURN'.\n\n");
    readLine2(text); // assigning array is pointer to a[0]
    printf("%s\n", text);

    return 0;
}
