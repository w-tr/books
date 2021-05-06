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
// Description    : Returning a Pointer from a Function
// Concepts       : A returned pointer can be useful as an index.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

struct entry
{
    int val;
    struct entry *next;
};

struct entry *findEntry (struct entry *listPtr, int match)
{
    while(listPtr != (struct entry *) 0)
    {
        if (listPtr->val == match)
            return (listPtr); // why in brackets?
        else
            listPtr = listPtr -> next;
    }
    return (struct entry *) 0;
}

int main(void)
{

    struct entry *findEntry (struct entry *listPtr, int match);
    struct entry n1, n2, n3;
    struct entry *listPtr, *listStart=&n1;

    int search;

    n1.val = 100;
    n1.next = &n2;
    n2.val = 200;
    n2.next = &n3;
    n3.val = 300;
    n3.next = 0; // (struct entry *) 0;

    printf("Enter value to locate: ");
    scanf("%i", &search);

    listPtr = findEntry(listStart, search);

    if (listPtr != (struct entry *) 0)
        printf("Found %i. \n", listPtr->val);
    else
        printf("Not found.\n");

    return 0;
}
