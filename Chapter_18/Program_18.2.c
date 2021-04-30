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
// Description    : Compiling in Debug Code
// Concepts       : In this instance the Debug is not defined, it must be 
//                :     included in the compile command
//                :     gcc -D DEBUG Program_18.2.c     // gcc
//                :     cl /D DEBUG Program_18.2.c      // vs2021
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdlib.h>

int process (int i1, int i2)
{
    int val;
#ifdef DEBUG
    fprintf(stderr, "process (%i, %i)\n", i1, i2);
#endif;

    val = i1 * i2;

#ifdef DEBUG
    fprintf(stderr, "return %i\n", val);
#endif;

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

#ifdef DEBUG
    fprintf(stderr, "processed %i arguments\n", argc-1);
    fprintf(stderr, "arg1 = %i, arg2 = %i\n", arg1, arg2);
#endif;
    printf("%i\n", process(arg1, arg2));

}

