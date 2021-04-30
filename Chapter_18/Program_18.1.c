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
// Description    : Adding Debug Statements with the Preprocessor
// Concepts       : If the debug is defined then the ifdef snippets of code are
//                :     included to be within the sequence of statements.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#define DEBUG1

int process ( int i, int j, int k)
{
    return i + j + k;
}

int main(void)
{
    int process ( int i, int j, int k);
    int i, j, k, nread;

    nread = scanf("%d %d %d", &i, &j, &k);

#ifdef DEBUG1
    fprintf(stderr, "Number of integers read = %i\n", nread);
    fprintf(stderr, "i = %i, j = %i, k = %i\n", i, j, k);
#endif

    printf("%i\n", process(i,j,k));
    return 0;
}
