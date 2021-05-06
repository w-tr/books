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
// Description    : System tools
// Concepts       : Read about library.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <ctype.h>

void printout(c)
{
    if (isalpha(c))
        if (isupper(c))
            printf("%c is an uppercase alphabetic character\n", c);
        else
            printf("%c is a lowercase alphabetic character\n", c);
    else if (isdigit(c))
        printf("%c is a digit character\n", c);
    else if (!isalpha(c) && !isdigit(c))
        printf("%c is a special character\n", c);
}

int main(void) 
{

    printout('c');
    printout('A');
    printout('4');
    printout('$');
    printout('9');
    printout('a');
    return 0;
}
