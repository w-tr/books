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
// Description    : Compare string with pointers.
// Concepts       : The other examples of this are wrong. They use a comparison
//                :     on the letter after it breaks
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>

// From chapter 10
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

int compareStrings2 (char *p1, char *p2)
{

    while (*p1 == *p2 && *p1 != '\0')
        compareStrings2(++p1, ++p2);

    if (*p1 < *p2)
        return -1;
    else if (*p1 == *p2)
        return 0; // match to '\0'
    else
        return 1;
}

int main(void)
{

    char str1[] = "This is a string";
    char str2[] = "This iS a str1ng";
    char str3[] = "This is a string";
    char str4[] = "This is Asstr";
    printf("string 1 = %s\n", str1);
    printf("string 2 = %s\n", str2);
    printf("string 3 = %s\n", str3);
    printf("string 4 = %s\n", str4);
    printf("compareStrings2(str1, str2) = %i\n", compareStrings2(str1, str2));
    printf("compareStrings2(str1, str3) = %i\n", compareStrings2(str1, str3));
    printf("compareStrings2(str1, str4) = %i\n", compareStrings2(str1, str4));
    return 0;

}
