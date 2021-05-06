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
// Description    : Modifying the Dictionary Lookup using Binary Search
// Concepts       : Using knowledge about how c stores characters, we can 
//                :     numerically compare to find out if a character is
//                :     greater than or less than. This determines where we
//                :     jump in the index, up or down.
//                : The deterministic search based on current search is called
//                :     a binary search.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>


struct entry
{
    char word[15];
    char definition[50];
};

int compareStrings (const char s1[], const char s2[])
{
    int i = 0, answer;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        ++i;

    if (s1[i] < s2[i])
        answer = -1;
    else if (s1[i] == s2[i])
        answer = 0;
    else
        answer = 1;

    return answer;
}

int lookup (const struct entry dictionary[], const char search[], 
        const int entries)
{
    int low = 0;
    int high = entries -1;
    int mid, result;

    int compareStrings (const char s1[], const char s2[]);

    while (low <= high)
    {
        mid = (low + high)/2;
        result = compareStrings(dictionary[mid].word, search);

        if (result == -1)
            low = mid+1;
        else if (result == 1)
            high = mid-1;
        else
            return mid; // found it
    }
    return -1; // not found.
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

