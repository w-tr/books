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
// Description    : Writing function called removeString
// Concepts       : 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    char string1[81];
    int start, length;
    void removeString(char s[], int start, int length);

    printf("Please enter string: ");
    gets(string1);
    printf("Please enter start and length or removal: ");
    scanf("%i %i", &start, &length);
    removeString(string1, start, length);
    printf("%s\n", string1);
    
    return 0;
}

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


