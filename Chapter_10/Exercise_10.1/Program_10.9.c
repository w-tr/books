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
// Description    : Using the Dictionary Lookup Program
// Concepts       : Structures can contian character strings.
//                : Comparisons can be iterative (more on binary search later)
//                : Indexing can be used for retreval of definition.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>

struct entry
{
    char word[15];
    char definition[50];
};

bool equalStr (const char s1[], const char s2[])
{
    int i = 0;
    bool areEqual;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        ++i;

    if (s1[i] == '\0' && s2[i] == '\0')
        areEqual = true;
    else 
        areEqual = false;

    return areEqual;
}

int lookup (const struct entry dictionary[], const char search[], 
            const int entries)
{
    int i;
    bool equalStr (const char s1[], const char s2[]);

    for (i=0; i< entries; ++i)
        if (equalStr(search, dictionary[i].word) )
            return i;

    return -1; // error no word found
}

int main(void)
{
    const struct entry dictionary[100] = 
    { { "aardvark" , "a burrowing African mammal"        } ,
        { "abyss"    , "a bottomless pit"                  } ,
        { "acumen"   , "mentally sharp; keen"              } ,
        { "addle"    , "to become confused"                } ,
        { "aerie"    , "a high nest"                       } ,
        { "affix"    , "to append; attach"                 } ,
        { "agar"     , "a jelly made from seaweed"         } ,
        { "ahoy"     , "a nautical call of greeting"       } ,
        { "aigrette" , "an ornamental cluster of feathers" } ,
        { "ajar"     , "partially opnened"                 }   } ;

    char word[10];
    int entries = 10;
    int entry;

    int lookup (const struct entry dictionary[], const char search[], 
            const int entries);
    printf("Enter word: ");
    scanf("%14s", word); // pointless since word is only 10 in size
    entry = lookup(dictionary, word, entries);

    if (entry != -1) 
        printf("%s\n", dictionary[entry].definition);
    else
        printf("sorry, the word %s is not in my dictionary", word);

    return 0;
}
