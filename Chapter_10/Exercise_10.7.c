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
// Description    : Writing function called insertString
// Concepts       : 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>


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

int main(void)
{
    char starttext[81] = "The wrong son";
    char starttext1[81] = "The wrong son";
    char midtext[81] = "The wrong son";
    char endtext[81] = "The wrong son";
    char endtext1[81] = "The wrong son";
    char outofbounds[81] = "The wrong son";

    insertString(starttext, "per", 0);
    insertString(starttext1, "per", 1);
    insertString(midtext, "per", 10);
    insertString(endtext, "per", 12);
    insertString(endtext1, "per", 13);
    insertString(outofbounds, "per", 14);
    printf("%s\n", starttext);
    printf("%s\n", starttext1);
    printf("%s\n", midtext);
    printf("%s\n", endtext);
    printf("%s\n", endtext1);
    printf("%s\n", outofbounds);
    return 0;
}
