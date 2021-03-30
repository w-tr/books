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
// Description    : Sorting a dictionary
// Concepts       : Test a member of a structure array element. Take the element
//                :     from a struct array, and hold as temp. Then sort.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>

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

// From Program 8.12
// void sort (int a[], int n)
// {
//     int i, j, temp;
// 
//     for (i=0; i<n-1; ++i)
//         for (j=i+1; j<n; ++j)
//             if (a[i] > a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
// }

void sortDictionary(struct entry dictionary[], int entries)
{
    int compareStrings (const char s1[], const char s2[]);
    // char word[15]; This was stupid it didn't sort definition, only one member.
    int i, j;
    struct entry temp;

    for (i = 0; i < entries; ++i)
        for (j = i + 1; j < entries; ++j)
            if (compareStrings(dictionary[i].word, dictionary[j].word) == 1) {
                temp          = dictionary[i];
                dictionary[i] = dictionary[j];
                dictionary[j] = temp;
            }
}

void printDict (struct entry dictionary[], int arraySize)
{
    for (int i=0; i<arraySize; i++)
        printf("%-15s : %s\n", dictionary[i].word, dictionary[i].definition);
}

int main(void)
{
    struct entry dictionary[100] = 
    { { "aardvark" , "a burrowing African mammal"        } ,
        { "ahoy"     , "a nautical call of greeting"       } ,             // Alphabetical error
        { "acumen"   , "mentally sharp; keen"              } ,
        { "addle"    , "to become confused"                } ,
        { "aerie"    , "a high nest"                       } ,
        { "affix"    , "to append; attach"                 } ,
        { "abyss"    , "a bottomless pit"                  } ,             // Alphabetical error
        { "agar"     , "a jelly made from seaweed"         } ,
        { "aigrette" , "an ornamental cluster of feathers" } ,
        { "ajar"     , "partially opnened"                 }   } ;

    char word[10];
    int entries = 10;
    int entry;
    void printDict (struct entry dictionary[], int arraySize);

    printf("-----------------------------------------------------------------\n");
    printf("Preordered list\n");
    printf("-----------------------------------------------------------------\n");
    printDict (dictionary, entries);

    sortDictionary(dictionary, entries);

    printf("-----------------------------------------------------------------\n");
    printf("Ordered list\n");
    printf("-----------------------------------------------------------------\n");
    printDict (dictionary, entries);

    return 0;

}
