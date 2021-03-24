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
// Description    : Reading Lines of Data
// Concepts       : The scanf %s exits on the a space delimiter. 
//                : With a getchar command it returns a character which can be
//                :     used repeatedly to generate the whole line. (until the 
//                :     \n symbol is encounted)
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    int i;
    char line[81];
    void readLine (char buffer[]);

    printf("Please input a line below\n");
    for (i = 0; i < 3; ++i)
    {
        readLine(line);
        printf("%s\n\n", line);
    }

    return 0;
}

// Function to read line of text from the terminal.
void readLine (char buffer[]) 
{
    char character;
    int i=0;

    do
    {
        character = getchar ();
        buffer[i] = character;
        ++i;
    }
    while (character != '\n');
    printf("how does it deal with backspace? - i = %i\n", i);

    buffer[i-1] = '\0'; // terminating char
}
