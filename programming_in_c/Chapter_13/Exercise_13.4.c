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
// Description    : Writing a macro for MAX3
// Concepts       : Passing variables to a define
//                : Ability to transcend data types
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#define MAX(A,B) \
    (A) > (B) ? (A) : (B)
// Most compact way is to have a macro call a macro for max of two.
// Brackets arround max(a,b) is essential
#define MAX3(A,B,C) \
    (MAX(A,B)) > (C) ? MAX(A,B) : (C)
#define MAX4(A,B,C,D) \
    (MAX3(A,B,C)) > (D) ? MAX3(A,B,C) : (D)

int main(void)
{
    printf("          V      \n");
    printf("MAX3(10,2,13) is : %i\n", MAX3(10, 2, 13));
    printf("        V      \n");
    printf("MAX3(10,20,13) is : %i\n", MAX3(10,20,13));
    printf("           V      \n");
    printf("MAX3(10,20,23) is : %i\n", MAX3(10,20,23));
    printf("           V      \n");
    printf("MAX3(20,10,23) is : %i\n", MAX3(20,10,23));
    printf("     V      \n");
    printf("MAX3(5.5,5.1,1.5) is : %f\n", MAX3(5.5,5.1,1.5));
    printf("         V      \n");
    printf("MAX3(5.1,5.5,1.5) is : %f\n", MAX3(5.1,5.5,1.5));
    printf("             V      \n");
    printf("MAX3(5.5,5.1,6.5) is : %f\n", MAX3(5.5,5.1,6.5));
    printf("      V      \n");
    printf("MAX3('b','a','A') is : %c\n", MAX3('b','a','A'));
    printf("          V      \n");
    printf("MAX3('a','b','A') is : %c\n", MAX3('a','b','A'));
    printf("              V      \n");
    printf("MAX3('A','a','b') is : %c\n", MAX3('A','a','b'));

    return 0;
}
