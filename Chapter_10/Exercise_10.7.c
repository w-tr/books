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

    tail[i-position] = '\0';

    printf("Tail\n");
    printf("%s\n", tail);
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

    printf("Superimpose over original\n");
    printf("%s\n", source);
}

void insertString(char source[], const char insert[], int position)
{
    int i;
    int j;
    char tail [81];
    void getTail(const char source[], char tail[], int position);

    // bail on impossible situation.
    if (position > strlen(source))
        return;

    getTail(source, tail, position);
    newBaseStr(source, insert, position);
    newBaseStr(source, tail, position+strlen(insert));

   //  // place original remainder at end of new source.
   //  for (i=(strlen(insert)+position), j=0; i<(strlen(source)+strlen(insert)); i++, j++)
   //      source[i] = temp[position+j];

   //  printf("Add copy of original's tail onto orignal\n");
   //  printf("%s\n", source);

   //  // finish with null char
   //  source[i] = '\0';
    return;
}

int main(void)
{
    char text[81] = "The wrong son";

    insertString(text, "per", 10);
    printf("%s\n", text);
    return 0;
}
