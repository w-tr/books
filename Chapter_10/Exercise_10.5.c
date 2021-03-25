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
// Description    : Writing function called findstring
// Concepts       : Index and iterative through.
//                : Thought about capital letters, you can compare with offset
//                :     s1[i+j] == s2[j] || s1[i+j] == s2[j] +/- offset.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    int index = 0;
    char string1[81];
    char string2[81];
    int findString(const char s1[], const char s2[]);

    printf("Please enter string1: ");
    gets(string1);
    printf("Please enter string2: ");
    gets(string2);

    index = findString(string1, string2);
    if (index >= 0)
        printf("Found string2 within string1 starting at character %i\n", index);
    else 
        printf("Could not find string2 in string1\n");
    // -------------------------------------
    // Collection of test cases
    // -------------------------------------
    // printf("Test mid to mid\n");
    // index = findString("this is a test", "is a");
    // printf("%i\n", index);
    // printf("Test mid to mid2\n");
    // index = findString("this is a test", "a tes");
    // printf("%i\n", index);
    // printf("Test start to mid\n");
    // index = findString("this is a test", "this is");
    // printf("%i\n", index);
    // printf("Test mid to end\n");
    // index = findString("this is a test", "a test");
    // printf("%i\n", index);
    // printf("Test start to end\n");
    // index = findString("this is a test", "this is a test");
    // printf("%i\n", index);
    // printf("Test capitalisation\n");
    // index = findString("this is a test", "this is A test");
    // printf("%i\n", index);

    return 0;
}

int findString(const char s1[], const char s2[])
{
    int i, j;

    // Exit on impossible before computing
    if (strlen(s2) > strlen(s1))
        return -1;

    for (i = 0; s1[i] != '\0'; ++i)
    {
        j=0;
    
        // char match and not end of s2
        while (s1[j+i] == s2[j] && s2[j] != '\0')
            j++; // iterate through

        // Has iteration reached end of string2
        if (s2[j] == '\0')
            return i;
    }
    return -1;
}
