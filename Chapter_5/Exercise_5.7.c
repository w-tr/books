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
// Description    : Determining the purpose of . in the field width spec of 
//                : printf
// Concepts       : Further learning into a specific function. I went to 
//                : the manual and found section pasted at the bottom
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    int dollars, cents, count;

    for (count=1; count <= 10; ++count) {
        printf("Enter Dollars: ");
        scanf("%i", &dollars);
        printf("Enter Cents  : ");
        scanf("%i", &cents);
        printf("$%i.%.2i\n\n", dollars, cents);
    }
    return 0;
}
// Concept introducted - 
/*.number*/

/*For integer specifiers (d, i, o, u, x, X) − precision specifies the minimum number of digits to be written. 
 *      If the value to be written is shorter than this number, the result is padded with leading zeros. 
 *      The value is not truncated even if the result is longer. 
 *      A precision of 0 means that no character is written for the value 0. 
 */
/*For e, E and f specifiers − this is the number of digits to be printed after the decimal point. */
/*For g and G specifiers − This is the maximum number of significant digits to be printed. */
/*For s − this is the maximum number of characters to be printed. 
 *      By default all characters are printed until the ending null character is encountered. */
/*For c type − it has no effect. When no precision is specified, the default is 1. 
 *
 * If the period is specified without an explicit value for precision, 0 is assumed.*/
