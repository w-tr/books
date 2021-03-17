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
// Description    : Counting the Characters in a String
// Concepts       : A terminating character can be used to find length. In this
//                :     instance \0 is the null char.
//                : Array dimensions for word1, 2, 3, are assigned during 
//                :     declaration because of assignment value.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int stringLength (const char string[])
{
    int count = 0;
    while (string[count] != '\0')
        ++count;
    return count;
}

int main(void)
{
    int stringLength (const char string[]);
    const char word1[] = {'a', 's', 't', 'e', 'r', '\0' };
    const char word2[] = {'a', 't', '\0'};
    const char word3[] = {'a', 'w', 'e', '\0'};

    printf("%i   %i   %i\n", stringLength(word1), stringLength(word2), stringLength(word3));
    return 0;
}

