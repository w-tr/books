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
// Description    : Revised Version of the copyString Function
// Concepts       : Using the increment operator, postfix, prefix to manipulate
//                :     a pointer according to needs.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

void copyString(char *to, char *from)
{
    while (*from)
        *to++ = *from++;

    *to = '\0';
}

int main(void)
{

    void copyString(char *to, char *from);

    char string1[] = "A string to be copied";
    char string2[50];

    copyString(string2, string1);
    printf("%s\n", string2);

    copyString(string2, "So is this");
    printf("%s\n", string2);

    return 0;

}
