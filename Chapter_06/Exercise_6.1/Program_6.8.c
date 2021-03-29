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
// Description    : Evaluating Simple Expression
// Concepts       : Multiple scanf inputs
//                : Many decisions on one variable
//                : Prelude to switch-case statement
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
        printf("%.2f\n", val1 / val2);

    return 0;
}
