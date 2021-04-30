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
// Description    : Defining a DEBUG Macro 
// Concepts       : Sometimes you don't even need the ifdef, you can simply
//                :     create a macro and overwrite it to fit your needs
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdlib.h>

#define DEBUG(fmt, ...) fprintf(stderr, fmt, __VA_ARGS__)

int process(int i1, int i2) {
    int val;

    DEBUG("process (%i, %i)\n", i1, i2);
    val = i1*i2;
    DEBUG("return %i\n", val);

    return val;
}

int main(int argc, char *argv[])
{
    int arg1 =0;
    int arg2 =0;

    if (argc > 2)
        arg1 = atoi (argv[1]); // convert string into int
    if (argc == 3)
        arg2 = atoi (argv[2]);

// #ifdef DEBUG
    DEBUG("processed %i arguments\n", argc-1);
    DEBUG("arg1 = %i, arg2 = %i\n", arg1, arg2);
// #endif;
    printf("%i\n", process(arg1, arg2));

}
