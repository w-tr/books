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
// Description    : Implementation of the Sieve of Erastothenes
// Concepts       : Implementing algorithm based on description of steps, using
//                :    knowledge of arrays, loops, everything discused todate
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Implementation of the Sieve of Erastothenes
// Fun facts    - Erastothenes was the head of the great library of alexandra
//              - He introduced the study of geography.
//              - He calculated the circumference of the earth.
//              - The sieve is so aptly named because the numbers not filtered 
//                out are prime.
//              - He invented the calendar that acknowledged the leap year.
//              - He was known as Beta, because he came second in every 
//                endeavour
//
// Algorithm information - Display prime between 1 and n.
// 1. Define array of P integers. Set all elements P_i to 0, {2 <= i <= n} 
// 2. set i to 2
// 3. if i > n the algorithm terminates.
// 4. If p_i is 0 then i is prime.
// 5. for all positive int values of j, such that i x j <= n, set Pixj to 1
// 6. add 1 to i and go to step 3.
//
#include <stdio.h>
#define n 150

int main(void)
{
    int prime_array[n+1];
    int i;
    int j;
    // step 1
    for (i=0; i<n; i++)
        prime_array[i] = 0;

    // step 2
    i = 2;

    // step 3
    for (i; i<n; i++)
        //step 4
        if (prime_array[i]==0) // found prime, now remove all multiples of it
            for (j=i; j<=n; j++)
                // step 5
                if (i*j <= n)
                    prime_array[i*j] = 1;
                else           // bail out because we exceed array dimensions
                    break;

    // step 6 return to step 3
    for (i=2; i<n; i++)
        if (prime_array[i] == 0)
            printf("%i      ", i);

    printf("\n");

    return 0;

}
