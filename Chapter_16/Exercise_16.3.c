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
// Description    : Copying Files, and changing lower to upper
// Concepts       : Expanding on Program 16.3 and adding character manipulation
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdlib.h> // needed for EXIT_FAILURE
#include <ctype.h> // needed for toupper

int main(void)
{
    char inName[64], outName[64];
    FILE *in, *out;
    int c;

    // find and open
    printf("Enter the name of the file to be copied : ");
    scanf("%63s", inName);
    printf("Enter the name of the output file : ");
    scanf("%63s", outName);

    if ( (in = fopen(inName, "rb")) == NULL ) 
    {
        fprintf(stderr, "Can't open the file %s for reading.\n", inName);
        exit(EXIT_FAILURE);
    }

    if ( (out = fopen(outName, "wb")) == NULL ) 
    {
        fprintf(stderr, "Can't open the file %s for writing.\n", outName);
        exit(EXIT_FAILURE);
    }

    //copy in to out
    while ( (c = getc(in) ) != EOF )
        putc(toupper(c), out);

    printf("The file has been copied\n");

    // close
    fclose(in);
    fclose(out);

    return 0;
}
