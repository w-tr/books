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
// Description    : A function called removeEntry
// Concepts       : A single link list looks forward, therefore you can delve
//                :     down the next links to find the next in sequence. This
//                :     enables you to remove a "node" from the list.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

struct entry
{ 
    int val;
    struct entry *next;
};

void insertEntryAfter(struct entry *new, struct entry *current)
{
    new->next = current->next;
    current->next = new;
}

void removeEntry(struct entry *removeAfter)
{
    // Figure 11.6
    // n1.next=n2.next or n1.next = &n3
    // (*removeAfter).next = *(*removeAfter.next).next ;
    // removeAfter->next = removeAfter->next->next; // most common method
    (*removeAfter).next = (*(*removeAfter).next).next ;
}
    
/*
 * This is wasteful because it requires the computer to write the 
 * data from one address to another, this requires time.
 * This alters the NODEs data.
// This over engineering on first run through is mentioned in next
// question.             |
//                       V
// YOU CAN ONLY INSERT AFTER, BECAUSE THE CURRENT NEEDS TO REDIRECT TO 
// THE NEW LINK. 
// TO INSERT BEFOREHAND YOU OVERWRITE THE VALUE OF CURRENT.
void insertEntryBefore(struct entry *new, struct entry *current)
{
    void insertEntryAfter(struct entry *new, struct entry *current);
    int temp;
    temp          =  new->val;
    new->val      =  current->val;
    current->val  =  temp;

    insertEntryAfter(new, current);
    //new->next = current->next;
    //current->next = new;
}
*/

int main(void)
{
    struct entry n1, n2, n3, n4, n5, n6;
    struct entry *list_pointer = &n1;
    int i;

    n1.val = 100;
    n1.next = &n2;
    n2.val = 200;
    n2.next = &n3;
    n3.val = 300;
    n3.next = &n4;
    n4.val = 400;
    n4.next = (struct entry *)0;
    n5.val = 500;
    n6.val = 600;

    printf("Original -----------\n");

    while (list_pointer != (struct entry *) 0)
    {
        printf("%i\n", list_pointer->val);
        list_pointer = list_pointer->next;
    }

    printf("Insert After n2-----------\n");

    list_pointer = &n1;

    insertEntryAfter(&n5, &n2);

    while (list_pointer != (struct entry *) 0)
    {
        printf("%i\n", list_pointer->val);
        list_pointer = list_pointer->next;
    }

    printf("Insert at start------------\n");
    struct entry n0 = {0, &n1};
    insertEntryAfter(&n6, &n0); //replace n1 with n6
    list_pointer = n0.next; // redirct here


    while (list_pointer != (struct entry *) 0)
    {
        printf("%i\n", list_pointer->val);
        list_pointer = list_pointer->next;
    }

    printf("Remove after n5------------\n");
    list_pointer = n0.next; // redirct here
    removeEntry(&n5);
    while (list_pointer != (struct entry *) 0)
    {
        printf("%i\n", list_pointer->val);
        list_pointer = list_pointer->next;
    }


    return 0;
}


