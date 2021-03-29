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
// Description    : Messy code & reformating exercise
// Concepts       : Need to refactor and utilise spaces, indentation, names, etc 
//                :    anything to improve for readablity.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/*
#include <stdio.h>
int main(void){
int n,two_to_the_n;
printf("TABLE OF POWERS OF TWO\n\n");
printf(" n      2 to the n\n");
printf("----    ------------\n");
two_to_the_n=1;
for(n=0;n<=10;++n){
printf("%2i            %i\n", n, two_to_the_n); two_to_the_n*=2;}
return 0;}
*/
// step 1. highlight and use = for vim auto indentation
// step 2. use cr to seperate chunks arround brackets or ;
// step 3. use spaces
// repeat step 1.
#include <stdio.h>
int main(void)
{
    int n, two_to_the_n;
    printf("TABLE OF POWERS OF TWO\n\n");
    printf(" n      2 to the n\n");
    printf("----    ------------\n");
    two_to_the_n=1;
    for(n=0;n<=10;++n)
    {
        printf("%2i            %i\n", n, two_to_the_n); 
        two_to_the_n*=2;
    }
    return 0;
}
