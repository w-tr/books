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
// Description    : A printing calculator for simple arithmetic
// Concepts       : Switch-case statement, and a simple but unspoken state 
//                : machine.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    float num, accum;
    char op;
    bool isSet = false;

    printf("Begin Calculation\n");

    do 
    {
        scanf("%f %c", &num, &op); // really should add check before loop to make sure both variables are assigned
        switch (op)
        {
            case '+':
                if (isSet)
                    accum += num;
                break;
            case '-':
                if (isSet)
                    accum -= num;
                break;
            case '*':
                if (isSet)
                    accum *= num;
                break;
            case '/':
                if (isSet)
                    if (num==0)
                        printf("Cannot perform division by zero\n");
                    else
                        accum /= num;
                break;
            case 'S':
                isSet = true;
                accum = num;
                break;
            case 'E':
                break;
            default:
                printf("Operator not identified!\n");
                break;
        }

        if (!isSet)
            printf("Please set the Accumulator\n");
        else
            printf("= %f\n", accum);

    } while (op != 'E');

    printf("End of Calculations\n");

    return 0;
}
