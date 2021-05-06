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
// Description    : Experiementing with union
// Concepts       : Can only hold one value at a time?
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    union mixed {
        char c;
        float f;
        int i;
    };

    union mixed x;

    printf("Using one at a time\n");
    x.c = 'K';
    printf("Char = %c\n", x.c);
    x.f = 786.3869;
    printf("Float = %f\n", x.f);
    x.i = 10;
    printf("int = %i\n", x.i);
    // works up to this point

    printf("Changing values within and then seeing retention\n");
    x.c = 'L';
    x.f = 790.3872;
    x.i = 15;
    printf("Char = %c\n", x.c);
    printf("Float = %f\n", x.f);
    printf("int = %i\n", x.i);
    return 0;
}

