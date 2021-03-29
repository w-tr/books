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
// Description    : Displaying numerical input as english or danish text
//                : equivalent.
// Concepts       : 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Brain dump
// ~~~~~~~~~~
// (1) Get the integer
// (2) Manipulate integer to switch each digit.
//          a. mod 10 wont work because we are not reversing it.
//          b. Can't use char array because it hasn't been taught yet.
//          c. HOWEVER integer division will give the quotient
//             quotient can be mod 10 to get least significant bit that was 
//             added. 
//              abc / bc = a
//              a mod 10 = a
//              -- next iteration
//              abc / c = ab
//              ab mod 10 = b ;
//              -- next iteration
//              abc / 1 = abc
//              abc mod 10 = c ;
// (3) Switch/Case the remainder and output text.
//
// Alternatively could do reverse and multi by 10 and add together and then
// reverse again for printout. However this requires twice as much looping.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#define ENGLISH 1 
#define DANISH 2

int main(void)
{
    int num, ptr;
    int temp, temp2;
    int language_flag = 2;
    printf("Please enter a number to be converted from numeric to text\n");
    scanf("%i", &num);
    //
    // Print negative then absolute it for following loop.
    if (num<0)
    {
        printf("Negative ");
        num = -num;
    }
    //Say and exit on Zero
    if (num==0)
    {
        if (language_flag == ENGLISH)
            printf("Zero! ");
        if (language_flag == DANISH)
            printf("Nul! ");
        return 0;
    }

    // 8 char long.
    // utilise int char type in division
    for (ptr = 10000000; ptr != 0; ptr = ptr / 10)
    {
        
        if (ptr <= num) 
        {
            temp = num / ptr;
            temp2 = temp % 10;
            switch (temp2) // type casting not needed
            {
                case 0:
                    if (language_flag == ENGLISH)
                        printf("Zero ");
                    if (language_flag == DANISH)
                        printf("Nul ");
                    break;
                case 1:
                    if (language_flag == ENGLISH)
                        printf("One ");
                    if (language_flag == DANISH)
                        printf("En ");
                    break;
                case 2:
                    if (language_flag == ENGLISH)
                        printf("Two ");
                    if (language_flag == DANISH)
                        printf("To ");
                    break;
                case 3:
                    if (language_flag == ENGLISH)
                        printf("Three ");
                    if (language_flag == DANISH)
                        printf("Tre ");
                    break;
                case 4:
                    if (language_flag == ENGLISH)
                        printf("Four ");
                    if (language_flag == DANISH)
                        printf("Fire ");
                    break;
                case 5:
                    if (language_flag == ENGLISH)
                        printf("Five ");
                    if (language_flag == DANISH)
                        printf("Fem ");
                    break;
                case 6:
                    if (language_flag == ENGLISH)
                        printf("Six ");
                    if (language_flag == DANISH)
                        printf("Seks ");
                    break;
                case 7:
                    if (language_flag == ENGLISH)
                        printf("Seven ");
                    if (language_flag == DANISH)
                        printf("Syv ");
                    break;
                case 8:
                    if (language_flag == ENGLISH)
                        printf("Eight ");
                    if (language_flag == DANISH)
                        printf("Otte ");
                    break;
                case 9:
                    if (language_flag == ENGLISH)
                        printf("Nine ");
                    if (language_flag == DANISH)
                        printf("Ni ");
                    break;
                default :
                    break;
            }
        }
    }

    printf("!\n"); // End
    return 0;
}
