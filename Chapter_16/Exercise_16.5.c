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
// Description    : Read and print only columns m to n
// Concepts       : Manipulate the fput to only place specific columns
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdlib.h>

#define kMax 256

int main (void) {

    // 1. Get file
    // =======================
    char fileName[kMax];
    FILE *inFile;
    
    printf("Enter name of file to be used: ");
    scanf("%[^\n]", fileName);

    if ( !(inFile = fopen(fileName, "rb")) ) {
        fprintf(stderr, "Can't open %s for reading.\n", fileName);
        exit(EXIT_FAILURE);
    }

    // 2. Get column range.
    // =======================
    int m, n;
    printf("Please enter range of columns (m to n) : ");
    scanf("%i to %i", &m, &n);
    // validate column range
    if ( !( (m >= 0) && (m <= n) && (n < kMax) ) ) {
        fprintf(stderr, "Failure for column range\n");
        exit(EXIT_FAILURE);
    }
    int colRange = n-m;

    // 3. Create buffer
    // =======================
    char buf[kMax];
    printf("Start\n");
    while ( fgets(buf, kMax, inFile) ) {
        //fprintf(stdout, "%*s", colRange, &buf[m]);
        printf("%.*s\n", colRange, &buf[m]);
        //if (buf[m+colRange] != '\n') 
            //printf("\n"); // This doesn't work when colRange exceeds limit then double \n
    }
    printf("End\n");

    // 4. Terminate
    // =======================
    fclose(inFile);
    return 0;
}
