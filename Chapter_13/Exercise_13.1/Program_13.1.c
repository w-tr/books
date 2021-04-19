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
// Description    : Introducing the #define Statement
// Concepts       : The #define statement, which is like a string replace, done
//                :     prior to compilation and execution
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

#define YES 1
#define NO 0

int isEven(int number)
{
    int answer;

    if (number % 2 == 0)
        answer = YES;
    else
        answer = NO;

    return answer;
}

int main(void)
{
    int isEven(int number);

    if (isEven(17) == YES)
        printf ("yes ");
    else 
        printf ("no ");

    if (isEven(20) == YES)
        printf ("yes\n");
    else 
        printf ("no\n");

    return 0;
}


