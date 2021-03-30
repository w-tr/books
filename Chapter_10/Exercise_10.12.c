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
// Description    : Convert a string to a floating number.
// Concepts       : https://en.wikipedia.org/wiki/Floating-point_arithmetic
//                : 1. Check string is acceptable
//                : 2. Find the sign
//                : 3. Find the point
//                : 4. Remove point and generate signifcand
//                : 5. Using point location create exponent
//                : 6. Multiply signifand, exponent and base to generate 
//                :     floating point.
//                : Important of long float/double
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//------------------------------------------------------------------------------
// Check string is acceptable.
//------------------------------------------------------------------------------
bool isNumeric(const char c)
{
    if (c >= '0' && c <= '9')
        return true;
    else
        return false;
}

bool isSpecial(const char c)
{
    if (c == '.' || c == '-') // ascii table 33 to 47, could add :, ;, etc.
        return true;
    else
        return false;
}

// TODO
// There may be a precheck required to work out base...is it hex, octo etc.
// Will consider that for another day
// Also user could break by having multiple '.' 
// Like the danish numbering 1.123.123 which means 1,123,123
bool isStrOK(const char str[])
{
    for (int i = 0; str[i] != '\0'; ++i)
        if (! ( isSpecial(str[i]) || isNumeric(str[i]) ) )
            return false;
    return true;
}

//------------------------------------------------------------------------------
// String Manipulation
//------------------------------------------------------------------------------
void removeString(char s[], int start, int length)
{
    int i;
    if (start <= strlen(s))
    {
        // ------------------------
        //     ^          ^
        //   offset     offset
        //   start    start+length
        for (i = start; i+length <= strlen(s); i++)
            s[i] = s[i+length];

        s[i] = '\0';
        // This is my long string\0
        // This long string\0ring\0  <- Does stuff exists after null char?
    }
}

int findString(const char s1[], const char s2[])
{
    int i, j;

    // Exit on impossible before computing
    if (strlen(s2) > strlen(s1))
        return -1;

    for (i = 0; s1[i] != '\0'; ++i)
    {
        j=0;
    
        // char match and not end of s2
        while (s1[j+i] == s2[j] && s2[j] != '\0')
            j++; // iterate through

        // Has iteration reached end of string2
        if (s2[j] == '\0')
            return i;
    }
    return -1;
}

//------------------------------------------------------------------------------
// String to number
//------------------------------------------------------------------------------
int getSign(const char str[])
{
    return (str[0] == '-') ? -1 : 1;
}

int str2int (const char str[])
{
    int i, intVal, result = 0;
    int getSign(const char str[]);

    int sign = getSign(str);
    int startNum = (sign == -1) ? 1 : 0; // offset for -1

    for (i=startNum; str[i] >= '0' && str[i] <= '9'; ++i)
    {
        intVal = str[i] - '0'; // Removes numerical offset
        result = result * 10 + intVal; // shift left and add.
    }

    return result*sign;
}

// long float or it loses accuracy
double str2float (char str[])
{
    const int c_base = 10;

    bool isStrOK(const char str[]);
    int getSign(const char str[]);
    int str2int (const char str[]);
    void removeString(char s[], int start, int length);

    // Check string
    // -----------------
    if (!isStrOK(str))
    {
        printf("str is not acceptable input\n");
        return -1.0; // meaningless because ans could be
    }

    // Find point location
    // -----------------
    //int sign = getSign(str);
    //int startNum = (sign == -1) ? 1 : 0; // offset for -1
    int pointLocation = findString(str, "."); // + startNum

    // Exit if not a floating point.
    // -----------------
    if (pointLocation < 0)
        return (float)str2int(str);


    // Find significand
    // -----------------
    removeString(str, pointLocation, 1);
    int significand = str2int(str);

    // Find the Exponent
    // -----------------
    // !!!old // update point location if '-' sign is in string.
    // !!!old    pointLocation -= startNum;
    // !!!
    // The '-' sign is included in strlen so don't need to factor 
    // it in with regards to point location
    // !!!
    int exponent = pointLocation - strlen(str); 


    // Generate floating number
    // -----------------
    float result_f = significand*pow(c_base, exponent);
    double result_lf = significand*pow(c_base, exponent);
    
    // #DEBUG 
    // Check everything is good
    // -----------------
    // printf("significand = %i\n", significand);
    // printf("exponent = %i\n", exponent);
    // printf("float s*e      = %f\n", result_f);
    // printf("long float s*e = %lf\n", result_lf);
    
    return result_lf;

}

int main(void)
{
    int str2int (const char str[]);
    double str2float (char str[]);

   //  printf("%i\n", str2int("245"));
   //  printf("%i\n", str2int("100")+25);
   //  printf("%i\n", str2int("13x5")); // if alphanumeric then exits loop.
   //  printf("%i\n", str2int("-245"));
   //  printf("%i\n", str2int("-100")+25);
   //  printf("%i\n", str2int("-13x5")); // if alphanumeric then exits loop.

   //  printf("%f\n", str2float("13x5")); // if alphanumeric then exits loop.
   //  printf("%f\n", str2float("245"));
   //  printf("%f\n", str2float("-100"));
    printf("------------------\n");
    printf("%f\n", str2float("-10.78"));
    printf("------------------\n");
    printf("%f\n", str2float("510.12"));
    printf("------------------\n");
    printf("%f\n", str2float("-10.123278"));
    printf("------------------\n");
    printf("%f\n", str2float("-123230.78"));
    printf("------------------\n");
    printf("%f\n", str2float("512320.12"));
    printf("------------------\n");
    printf("%f\n", str2float("51080.12"));
    printf("------------------\n");
    printf("%f\n", str2float("13x5")); // if alphanumeric then exits loop.
    printf("------------------\n");
    printf("%f\n", str2float("-867.6921"));

    return 0;
}
