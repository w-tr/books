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
    int start, length;
    void removeString(char s[], int start, int length);

    //  printf("Please enter string: ");
    //  gets(string1);
    //  printf("Please enter start and length or removal: ");
    //  scanf("%i %i", start, length);
    
    // l-value
    // string0 = "the wrong son";
    char string0[] = "the wrong son";
    start = 4, length = 6;
    removeString(string0, start, length);
    printf("%s!0\n", string0);

    char string1[] = "the wrong son";
    start = 8, length = 6;
    removeString(string1, start, length);
    printf("%s!1\n", string1);

    char string2[] = "This is my long string";
    start = 4, length = 6;

    for (int i=0; i <= 23; i++)
        printf("%c", string2[i]);
    printf("!2");
    printf("\n");

    removeString(string2, start, length);
    printf("%s!!2\n", string2);

    for (int i=0; i <= 23; i++)
        printf("%c", string2[i]);
    printf("!!!2");
    printf("\n");

    char string3[] = "This is my long string";
    start = 0, length = 11;

    for (int i=0; i <= 23; i++)
        printf("%c", string3[i]);
    printf("!3");
    printf("\n");

    removeString(string3, start, length);
    printf("%s!!3\n", string3);

    for (int i=0; i <= 23; i++)
        printf("%c", string3[i]);
    printf("!!!3");
    printf("\n");
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


