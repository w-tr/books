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
// Description    : A Doubly linked list
// Concepts       : Adding bidirectional information to a linked list
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

struct entry
{ 
    int val;
    struct entry *next;
    struct entry *previous;
};

int main(void)
{
    struct entry n0, n1, n2, n3, n4, n5, n6;
    struct entry *list_pointer;
    int i;

    n0 = (struct entry) {0, &n1, (struct entry *) 0};
    n1 = (struct entry) {100, &n2, &n0};
    n2 = (struct entry) {200, &n3, &n1};
    n3 = (struct entry) {300, &n4, &n2};
    n4 = (struct entry) {400, (struct entry *) 0, &n5}; // early termination.
    n5 = (struct entry) {500, &n6, &n4};
    n6 = (struct entry) {600, (struct entry *) 0, &n5};

    printf("Original -----------\n");
    list_pointer = n0.next;

    while (list_pointer != (struct entry *) 0)
    {
        if (list_pointer->next != (struct entry *) 0)
            printf("%i, %i, %i\n", list_pointer->val, list_pointer->next->val, list_pointer->previous->val);
        else
            printf("Error listpointer.next is not valid, cannot extract ->val\n");

        list_pointer = list_pointer->next;
    }

    return 0;
}


