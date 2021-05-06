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
// Description    : Reading Strings with scanf
// Concepts       : Scanf allows the user to input a string to a char array.
//                : A space acts as a delimiter, thereby placing data into the 
//                :     next variable s2, s3 or teminating input into current
//                :     variable.
//                : If the user doesn't enter at least 3 variables the scanf
//                :     function holds the program up until it's recieved
//                :     what it expects.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main (void)
{
    char s1[81], s2[81], s3[81];

    printf("Enter Text:\n");

    scanf ("%s%s%s", s1, s2, s3);

    printf("\n");
    printf("s1 = %s", s1);
    printf("\n");
    printf("s2 = %s", s2);
    printf("\n");
    printf("s3 = %s", s3);
    printf("\n");
    return 0;
}
