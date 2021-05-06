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
// Description    : Writing function called replaceString2
// Concepts       : 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>

void removeString(char s[], int start, int length)
{
    int strSize = strlen(s);
    int i;
    if (start <= strSize)
    {
        // ------------------------
        //     ^          ^
        //   offset     offset
        //   start    start+length
        for (i = start; i+length <= strSize; i++)
            s[i] = s[i+length];

        s[i] = '\0';
        // This is my long string\0
        // This long string\0ring\0  <- Does stuff exists after null char?
    }
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

void getTail(const char source[], char tail[], int position)
{

    int i;
    // Get tail
    for (i=position; source[i] != '\0'; i++)
        tail[i-position] = source[i];

    // terminate
    tail[i-position] = '\0';

    return;
}

void newBaseStr(char source[], const char insert[], int position)
{
    int offset; // offset
    int j;
    // place insert over original at offset
    for (offset=position, j=0; insert[j]!='\0'; offset++, j++)
        source[offset] = insert[j];
    //terminate
    source[offset] = '\0';
    return;
}

void insertString(char source[], const char insert[], int position)
{
    int i;
    int j;
    char tail [81];
    void getTail(const char source[], char tail[], int position);

    // bail on impossible situation.
    if (position > strlen(source))
    {
        printf("out of bounds\n");
        return;
    }

    getTail(source, tail, position);
    newBaseStr(source, insert, position);
    newBaseStr(source, tail, position+strlen(insert));
    return;
}

bool replaceString(char source[], const char s1[], const char s2[])
{
    void removeString(char s[], int start, int length);
    int findString(const char s1[], const char s2[]);
    void insertString(char source[], const char insert[], int position);
    int position;

    position = findString(source, s1);
    // Bail on no match
    if (position < 0)
        return false;

    removeString(source, position, strlen(s1));

    insertString(source, s2, position);

    return true;
}

void loopReplaceString(char source[], const char s1[], const char s2[])
{
    bool replaceString(char source[], const char s1[], const char s2[]);
    bool stillFound;
    do {
        stillFound = replaceString(source, s1, s2);
    } while (stillFound == true); // typo in book
    return;
}

int main(void)
{
    bool replaceString(char source[], const char s1[], const char s2[]);
    char text1[81] = "This is test 1";
    char text2[81] = "This is test 2";
    char text3[81] = "This is test 3";
    char text4[81] = "This is test *, and terminates here";
    char text5[81] = "This is test *, and terminates here";
    char text6[81] = "This is test 1";
    char text7[81] = "This is test 1";
    bool stillFound;

    //old stuff
    stillFound = replaceString(text1, "is", "was"); // triggers on this instead of " is" or "^is" standalone
    stillFound = replaceString(text2, " ", "_"); // only does first instance?
    stillFound = replaceString(text3, "test", "TEST");
    stillFound = replaceString(text4, "*", "");
    stillFound = replaceString(text5, "*", "\'\0'");

    printf("%s\n", text1);
    printf("%s\n", text2);
    printf("%s\n", text3);
    printf("%s\n", text4);
    printf("%s\n", text5);

    //new stuff
    printf("------IMPLEMENTATION OF LOOPING STRING REPLACE\n");
    loopReplaceString(text6, " ", "_");
    printf("%s\n", text6);
    loopReplaceString(text7, "is", "IS");
    printf("%s\n", text7);

    return 0;

}
