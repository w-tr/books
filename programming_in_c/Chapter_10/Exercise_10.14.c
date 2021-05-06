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
// Description    : Function int to string
// Concepts       : 1. Get integer number
//                : 2. Find sign.
//                : 3. Find place units / size of number (10^x).
//                : 4. Pop digits off integer and convert to string
//                : 5. Order can be left to right or right to left depending on
//                :        how I handle place units.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>

int getNumber()
{
    int i;
    printf("Please enter an integer number : ");
    scanf("%i", &i);
    return i;
}

bool isNeg(int n)
{
    if (n < 0)
        return true;
    return false;
}

bool isPos(int n)
{
    if (n > 0)
        return true;
    return false;
}

int abs(int n)
{
    bool isNeg(int n);
    if (isNeg(n))
        return n * -1;
    else
        return n;
}

int getMaxUnit(int n)
{
    int abs(int n);
    int unitPlace = 0;
    int overFlow = abs(n);

    while (overFlow != 0) // utilise int division and rounding
    {
        overFlow /= 10;
        ++unitPlace;
    }

    return unitPlace;
}

char convertDigit (int digit)
{
    return digit + '0';
}

int getDigit(int n)
{
    int abs(int n);
    return abs(n % 10);
}
int shiftRight(int n)
{
    int abs(int n);
    return (abs(n / 10));
}

// Representation of an integer in c.
// 2^32 = 4294967296
//        ---------- 10^10   // 10 chars
//      '-'         '\0'     // 2 more chars
// Therefore char string shall be 12
void int2str(int n, char s[12])
{
    //Functions used
    int getMaxUnit(int n);
    bool isNeg(int n);
    int getDigit(int n);
    char convertDigit (int digit);
    int shiftRight(int n);

    int indexStart = 0;
    int placeUnit;
    int maxUnit;

    if  (isNeg(n))
    {
        indexStart = 1;
        s[0] = '-';
    }

    maxUnit = getMaxUnit(n) + indexStart;
    // working right to left
    // -       -------------     -
    // sign    number           null
    s[maxUnit] = '\0';

    for (placeUnit = maxUnit-1; placeUnit >= indexStart; --placeUnit)
    {
        s[placeUnit] = convertDigit(getDigit(n));
        n            = shiftRight(n);
    }

    return;
}

int main(void)
{

    void int2str(int n, char s[12]);
    char str[12];

    int2str(1, str);
    printf("%s\n", str);
    int2str(123, str);
    printf("%s\n", str);
    int2str(34, str);
    printf("%s\n", str);
    int2str(-123, str);
    printf("%s\n", str);
    int2str(-1222123, str);
    printf("%s\n", str);
    int2str(9993432, str);
    printf("%s\n", str);
    int2str(4294967296, str); // number is too big
    printf("%s\n", str);
    int2str(4294967295, str); // sign -1
    printf("%s\n", str);
    int2str(4294967195, str); // sign -1 -100
    printf("%s\n", str);
    int2str(2147483648, str); // Max neg
    printf("%s\n", str);
    int2str(2147483647, str); // Max pos
    printf("%s\n", str);
    return 0;
}
