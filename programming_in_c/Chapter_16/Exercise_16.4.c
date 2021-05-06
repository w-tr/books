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
// Description    : Copy from two and write as a stitch into stdout.
// Concepts       : Using line retrival until end of line.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdlib.h>

#define kFile1 "Ex_16.4_file1"
#define kFile2 "Ex_16.4_file2"
#define kSize 256

int main (void) {

    char buff1[kSize];
    char buff2[kSize];
    FILE *in1; 
    FILE *in2; 

    // resillence design
    if (NULL == (in1 = fopen(kFile1, "rb" ))) {
        fprintf(stderr, "Cannot open %s for reading\n", kFile1);
        exit(EXIT_FAILURE);
    }
    if (NULL == (in2 = fopen(kFile2, "rb" ))) {
        fprintf(stderr, "Cannot open %s for reading\n", kFile2);
        exit(EXIT_FAILURE);
    }

    while (!feof(in1) || !feof(in2)) {

        fgets(buff1, kSize, in1); // what happens when i've reached end and keep reading?
        fgets(buff2, kSize, in2);
        if (!feof(in1)) {
            fprintf(stdout, "%s", buff1);
        }
        if (!feof(in2)) {
            fprintf(stdout, "%s", buff2);
        }

    }
    fclose(in1);
    fclose(in2);
    return 0;
}
