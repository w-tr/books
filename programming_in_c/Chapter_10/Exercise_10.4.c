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
// Description    : Writing function called substring
// Concepts       : Failing gracefully when when manipulating a string.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    int start = 0, count = 0;
    char line[81];
    char sub[81];
    void substring(const char s[], int start, int count, char r[]);

    printf("Please enter string: ");
    gets(line); // In build function discussed earlier at readline section
    printf("Please enter start position and count thereafter for substring : ");
    scanf("%i%i", &start, &count);
    // Check start and end are within string length.
    if ( (start + count) <= strlen(line))
    {
        substring(line, start, count, sub);
        printf("%s\n", sub);
    }
    else
    {
        printf("You are outside of the dimensions ! \n");
        if (start <= strlen(line))
        {
            //substring(line, start, (strlen(line)-start), sub);
            // Do not need to be so thorough, the '\0' check
            // forces the substring to exit at end of line
            printf("Start is within dimensions therefore, start to end is : ");
            substring(line, start, count, sub);
            printf("%s\n", sub);
        }
        else
            printf("Even your start is greater than line...common man\n");
    }
    return 0;
}

void substring(const char s[], int start, int count, char r[])
{
    int i, j;

    for (i = start, j = 0; j < count && s[i] != '\0'; ++i, ++j)
        r[j] = s[i];
    r[j] = '\0';
    // // Alternative
    // for (j = 0; j < count; ++j)
    //     if (s[start+j] = '\0')
    //     {
    //         r[j] = '\0';
    //         break;
    //     }
    //     else
    //         r[j] = s[start+j];
}
