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
// Description    : Counting Words in a Piece of Text
// Concepts       : Capture a line of text with Readline. Count words in this 
//                :     line and repeat until the "null string" is encounted.
//                : Test doesn't confirm that string length is 0 etc, it just 
//                :     indexs the [0] for null char. From user input this can 
//                :     be acheived with double return.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>

bool alphabetic(const char c)
{
    if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
        return true;
    else
        return false;
}

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

    buffer[i-1] = '\0'; // terminating char
}

int countWords (const char string[])
{
    int i, wordCount = 0;
    bool lookingForWord = true, alphabetic (const char c);

    for (i = 0; string[i] != '\0'; ++i)
        if ( alphabetic(string[i]) )
        {
            if (lookingForWord)
            {
                ++wordCount;
                lookingForWord = false;
            }
        }
        else
            lookingForWord = true; // when not alphabetic

    return wordCount;
}

int main(void)
{
    char text[81];
    int totalWords = 0;
    int countWords (const char string[]);
    void readLine (char buffer[]) ;
    bool endOfText=false;

    printf("Type in your text.\n");
    printf("When you are done, please press 'RETURN'.\n\n");

    while (!endOfText)
    {
        readLine(text);
        if (text[0] == '\0') // null string text=""
            endOfText = true;
        else
            totalWords += countWords(text); // Add words from current line to total.
    }

    printf("\n");
    printf("There are %i words in the above text. \n", totalWords);

    return 0;
}
