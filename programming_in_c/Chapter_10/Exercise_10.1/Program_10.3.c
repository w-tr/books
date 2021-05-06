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
// Description    : Concatenating Character Strings
// Concepts       : A character array can be assigned using double quotations, 
//                :     so "le" is equivilant to {'l', 'e'}
//                : The %s format string in prinft will output until termination
//                :     character is encountered.
//                : You many need to add the terminating character to the end
//                :     of the string, to ensure it will function with these
//                :     types of functions.
// Note           : The j and i are used as markers to keep track of str1 and 2
//                :     length. 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    void concat(char result[], const char str1[], const char str2[]);
    const char s1[] = {"Test "};
    const char s2[] = {"works."};
    char s3[20]; // surplus to required dimensions.

    concat(s3, s1, s2);

    printf("%s\n", s3);
    return 0;
}

void concat(char result[], const char str1[], const char str2[])
{
    int i, j;

    for (i=0; str1[i] != '\0'; ++i)
        result[i] = str1[i];
    for (j=0; str2[j] != '\0'; ++j)
        result[i+j] = str2[j];
    // Terminate with null character
    result[i+j] = '\0';
}
