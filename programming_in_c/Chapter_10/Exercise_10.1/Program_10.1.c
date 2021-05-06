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
// Description    : Concatenating two character arrays
// Concepts       : A character array has dimensions. If the dimensions are 
//                :     known then concatination can be achived by creating a 
//                :     new string that has the dimensions of the sum.
//                : This is method iterates through the array, but knows when 
//                :     to stop.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

void concat (char result[], const char str1[], int n1, 
             const char str2[], int n2)
{
    int i, j;

    // copy str1 to result
    for (i=0; i<n1; ++i)
        result[i] = str1[i];

    // copy str2 to result
    for (j=0; j<n2; ++j)
        result[j+n1] = str2[j];
}

#define size1 5
#define size2 6
int main(void)
{
    void concat (char result[], const char str1[], int n1, 
            const char str2[], int n2);
    const char s1[size1] = {'T', 'e', 's', 't', ' '};
    const char s2[size2] = {'w', 'o', 'r', 'k', 's', '.'};
    char s3[size1+size2];
    int i;

    concat(s3, s1, size1, s2, size2);

    for (i=0; i<size1+size2; ++i)
        printf("%c", s3[i]);

    printf("\n");

    return 0;
}
