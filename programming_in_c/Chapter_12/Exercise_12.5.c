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
// Description    : A bit test function
// Concepts       : When someone says bit 0 I assume lsb. 
//                : Author says "Assume that bit number 0 references 
//                :     leftmost bit inside the integer."
//                :     Quite frankly i think he's messed up his lefts and 
//                :     rights.
//                :     2^n ......2^2 2^1 2^0.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#define SYSTEM_INT_SIZE 32

int main(void)
{
    char *intToBinStr(unsigned int number);
    int bit_test1(unsigned int intNum, int bitNum);
    int bit_test2(unsigned int intNum, int bitNum);
    int mask_bit_x(unsigned int intNum, int x);
    int set_bit(unsigned int intNum, int x);
    printf("Test 0xDEADBEEF hex          = %x\n", 0xDEADBEEF);
    printf("Test 0xDEADBEEF bin          = %s\n", intToBinStr(0xDEADBEEF));
    printf("Test 0xDEADBEEF mask         = %x\n", mask_bit_x(0xDEADBEEF, 3));
    printf("Test 0xDEADBEEF mask bin     = %s\n", intToBinStr(mask_bit_x(0xDEADBEEF, 3)));
    printf("Test 0xDEADBEEF bit_test b3  = %i\n", bit_test1(0xDEADBEEF, 3));
    printf("Test 0xDEADBEEF bit_test2 b3 = %i\n", bit_test2(0xDEADBEEF, 3));

    printf("Test 0xDEADBEEF set_bit b4   = %x\n", set_bit(0xDEADBEEF, 4));
    printf("Test 0xDEADBEEF unset_bit b4 = %x\n", unset_bit(0xDEADBEFF, 4));
    return 0;
}


// Create string for binary representation
char *intToBinStr(unsigned int number)
{
    // Static because the memory location must remain
    static char bitStr[SYSTEM_INT_SIZE+1]; // need to make this dynamic
    // 1. 0 inverted = all 1's
    // 2. Arithmetic shift right
    // 3. Then invert again to preseve MSB '1'
    //const int unsigned mask = ~(~0>>1); // FAIL, because of logic shift
    const int unsigned mask = ~(~0u>>1); // Success because of u
    int i;

    // Populate string with MSB to LSB.
    for (i=0; i<SYSTEM_INT_SIZE; i++)
    {
        bitStr[i] = (number & mask) ? '1' : '0'; 
        number <<= 1;
    }
    // Terminate string
    bitStr[SYSTEM_INT_SIZE] = '\0';
    return (bitStr);
}

// Two ways to do this
// 1. shift intNum and mask with 1. This returns 1 or 0.
// 2. Move mask to relevant bit. Mask with intNum. If > 0 then '1' else '0'.
int bit_test1(unsigned int intNum, int bitNum)
{
    int mask = 1;
    int shift = intNum;

    if (bitNum > 0)
        bitNum %= SYSTEM_INT_SIZE;
    else
        bitNum = -(-bitNum % SYSTEM_INT_SIZE);

    if (bitNum > 0)
        shift >>= bitNum;
    else
        shift <<= bitNum;

    return mask & shift;
}
int bit_test2(unsigned int intNum, int bitNum)
{
    if (bitNum < 0)
        bitNum *= -1;
    
    bitNum %= SYSTEM_INT_SIZE;

    // shift left or right...maybe i should force bitNum to be postive.
    int mask = 1 << bitNum; 

    if (intNum & mask)
        return 1;
    else 
        return 0;
}

int mask_bit_x(unsigned int intNum, int x)
{
    return intNum & (1 << x);
}

int set_bit(unsigned int intNum, int x)
{
    return intNum | (1 << x);
}

int unset_bit(unsigned int intNum, int x)
{
    return intNum & ~(1 << x);
}
