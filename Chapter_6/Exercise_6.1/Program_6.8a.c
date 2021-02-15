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
// Description    : Revising the Program to Evaluate Simple Expressions
// Concepts       : Added extra decision to prevent devision by zero, this is a 
//                : intro into secure programming and failsafe measures
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    float val1, val2;
    char operator;

    printf("Enter a expression: ");
    scanf("%f %c %f", &val1, &operator, &val2);

    if (operator == '+')
        printf("%.2f\n", val1 + val2);
    else if (operator == '-')
        printf("%.2f\n", val1 - val2);
    else if (operator == '*')
        printf("%.2f\n", val1 * val2);
    else if (operator == '/')
        if (val2 == 0)
            printf("division by zero is not allowed \n");
        else
            printf("%.2f\n", val1 / val2);
    else // general mistakes
        printf("Unknown operator. \n");

    return 0;
}
