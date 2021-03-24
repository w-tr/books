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
// Description    : Modify Program 10.7 and 10.8 countWord function.
// Concepts       : You can change the bounds of what is acceptable before 
//                :     reseting a flag
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

bool numeric(const char c)
{
    if (c >= '0' && c <= '9')
        return true;
    else
        return false;
}

bool special(const char c)
{
    if (c >= '!' && c <= '/') // ascii table 33 to 47, could add :, ;, etc.
        return true;
    else
        return false;
}

bool wordContinues(const char c)
{
    if (alphabetic(c) || numeric(c) || special(c))
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
    bool lookingForWord = true, wordContinues (const char c);

    for (i = 0; string[i] != '\0'; ++i)
        if (wordContinues(string[i]) )
        {
            if (lookingForWord)
            {
                ++wordCount;
                lookingForWord = false;
            }
        }
        else
            lookingForWord = true;

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
