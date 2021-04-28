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
// Description    : File Copy Program Using Command-Line Arguments
// Concepts       : Command line arugments being used.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *in, *out;
    int c;

    if (argc != 3) {
        fprintf(stderr, "Need two files names\n");
        return 1;
    }

    if ( (in = fopen(argv[1], "rb") ) == NULL ) {
        fprintf(stderr, "Can't read %s.\n", argv[1]);
        return 2;
    }

    if ( (out = fopen(argv[2], "wb") ) == NULL ) {
        fprintf(stderr, "Can't write %s.\n", argv[1]);
        return 3;
    }

    // copy from in to out.
    while ( (c = getc(in) ) != EOF ) 
        putc(c, out);

    printf("File has been copied.\n");

    fclose(in); fclose(out);

    return 0;

}
