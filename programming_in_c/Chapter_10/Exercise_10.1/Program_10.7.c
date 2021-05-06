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
// Description    : Counting Words
// Concepts       : Using a flag, like one would use a rising edge to determine
//                :     if a new sequence of alphabetic characters are encounted
//                : Using loop to find null char.
//                : Null char added to string automatically.
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
    const char text1[] = "Well, here goes.";
    const char text2[] = "And here we go... again.";
    const char text3[] = "Using numerical num8ers can break a word into two 9 | 10";
    int countWords (const char string[]);

    printf("%s - words = %i\n", text1, countWords(text1) );
    printf("%s - words = %i\n", text2, countWords(text2) );
    printf("%s - words = %i\n", text3, countWords(text3) );

    return 0;
}
