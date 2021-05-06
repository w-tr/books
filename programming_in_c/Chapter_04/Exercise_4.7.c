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
// Description    : Evaluate and output the given expression.
// Concepts       : Using scintific notation for floats, or doubles or neither.
//                : Scale can determine what is visible.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    float ans;
    double ans2;

    ans  = (3.31e-10 * 2.01e-7) / (7.16e-6 + 2.01e-8);
    ans2 = (3.31e-10 * 2.01e-7) / (7.16e-6 + 2.01e-8);

    printf("Using float as supplied subsitute variable\n");
    printf("%%f : (3.31e-10 * 2.01e-7) / (7.16e-6 + 2.01e-8)  = %f\n", ans); 
    printf("%%g : (3.31e-10 * 2.01e-7) / (7.16e-6 + 2.01e-8)  = %g\n", ans); 
    printf("%%e : (3.31e-10 * 2.01e-7) / (7.16e-6 + 2.01e-8)  = %e\n", ans); 
    printf("Using double as supplied subsitute variable\n");
    printf("%%lf : (3.31e-10 * 2.01e-7) / (7.16e-6 + 2.01e-8) = %lf\n", ans2); 
    printf("%%g : (3.31e-10 * 2.01e-7) / (7.16e-6 + 2.01e-8)  = %g\n", ans2); 
    printf("%%e : (3.31e-10 * 2.01e-7) / (7.16e-6 + 2.01e-8)  = %e\n", ans2); 
    printf("Using assignment as subsitute variable\n");
    printf("%%f : (3.31e-10 * 2.01e-7) / (7.16e-6 + 2.01e-8)  = %f\n", (3.31e-10 * 2.01e-7) / (7.16e-6 + 2.01e-8)); 
    printf("%%g : (3.31e-10 * 2.01e-7) / (7.16e-6 + 2.01e-8)  = %g\n", (3.31e-10 * 2.01e-7) / (7.16e-6 + 2.01e-8)); 
    printf("%%e : (3.31e-10 * 2.01e-7) / (7.16e-6 + 2.01e-8)  = %e\n", (3.31e-10 * 2.01e-7) / (7.16e-6 + 2.01e-8)); 

    return 0;
}
