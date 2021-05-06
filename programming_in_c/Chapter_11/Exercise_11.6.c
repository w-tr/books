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
// Description    : A Doubly linked list with removeEntry and insertEntry
// Concepts       : Because link directional information next and previous are 
//                :     provided, the removal of an Entry doesn't have to 
//                :     take place after the pointer.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

struct entry
{ 
    int val;
    struct entry *next;
    struct entry *previous;
};

void removeEntry(struct entry *p)
{
    //fwd
    if (p->next) // if valid
        (p->previous)->next = p->next;
    else
        (p->previous)->next = NULL;
    //back
    if (p->previous)
        (p->next)->previous = p->previous;
    else
        (p->next)->previous = NULL;
}

void insertEntryAfter(struct entry *new, struct entry *pos)
{
    new->previous = pos;
    new->next = pos->next;
    pos->next = new;
}

void insertEntryBefore(struct entry *new, struct entry *pos)
{
    new->previous = pos->previous;
    new->next = pos;
    (pos->previous)->next = new;
    pos->previous = new;
}

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
        printf("%i\n", list_pointer->val);
        list_pointer = list_pointer->next;
    }

    printf("Insert n6 before n3 -----------\n");
    list_pointer = n0.next;
    insertEntryBefore(&n6, &n3);

    while (list_pointer != (struct entry *) 0)
    {
        printf("%i\n", list_pointer->val);
        list_pointer = list_pointer->next;
    }

    printf("Insert n5 after n3 -----------\n");
    list_pointer = n0.next;
    insertEntryAfter(&n5, &n3);

    while (list_pointer != (struct entry *) 0)
    {
        printf("%i\n", list_pointer->val);
        list_pointer = list_pointer->next;
    }


    printf("Remove n3-----------\n");
    list_pointer = n0.next;
    removeEntry(&n3);

    while (list_pointer != (struct entry *) 0)
    {
        printf("%i\n", list_pointer->val);
        list_pointer = list_pointer->next;
    }


    return 0;
}
