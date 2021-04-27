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
// Description    : Copying Files
// Concepts       : Utilising the fopen, fclose, getc, putc functions to 
//                :     open, read, write and close files.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

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
        printf("Can't open the file %s for reading.\n", inName);
        return 1;
    }

    if ( (out = fopen(outName, "wb")) == NULL ) 
    {
        printf("Can't open the file %s for writing.\n", outName);
        return 2;
    }

    //copy in to out
    while ( (c = getc(in) ) != EOF )
        putc(c, out);

    printf("The file has been copied\n");

    // close
    fclose(in);
    fclose(out);

    return 0;
}
