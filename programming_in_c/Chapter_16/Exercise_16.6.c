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
// Description    : Display 20 lines at a time. This is like unix more.
// Concepts       : Mid iteration wait for user input.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdlib.h>

#define kMax 256
#define kLoopLimit 20

int main(void) {
    char buf[kMax];
    FILE *inFile;
    char quit;
    int i;

    // Get file
    printf("Please select file to read : ");
    scanf("%[^\n]", &buf);
    getchar(); // clear scanf stdin
    if ( !(inFile = fopen(buf, "rb")) ) {
        fprintf(stderr, "Can't open %s for reading.\n", buf);
        exit(EXIT_FAILURE);
    }

    // Output 20 lines
    i = 0;
    while ( fgets(buf, kMax, inFile) ) {

        fprintf(stdout, "%s", buf);
        i++;

        if (i == kLoopLimit) {
            printf("Press q to quit! Otherwise it will continue : ");
            if (getchar() == 'q') {
                printf("q has been pressed\n");
                return 0;
                //break;
            }
            // reset i
            i = 0;
        }

    }
    printf("The end of the file has been reached\n");
    return 0;
}
