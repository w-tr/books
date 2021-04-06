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
// Description    : Traversing a Linked Lists
// Concepts       : A linked list can benefit form a start pointer and a 
//                :     pointer to null (terminator). To contain the list.
//                : The traversing is done by moving the start pointer or the 
//                :     list_pointer.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{

    struct entry
    {
        int           val;
        struct entry *next;
    };

    struct entry n1, n2, n3;
    struct entry *list_pointer = &n1; // start pointer


    n1.val = 100;
    n1.next = &n2;

    n2.val = 200;
    n2.next = &n3;

    n3.val = 300;
    n3.next = (struct entry *) 0; // null pointer or terminator

    while (list_pointer != (struct entry *) 0)
    {
        printf("%i\n", list_pointer->val);
        list_pointer = list_pointer->next; // transition 
    }

    return 0;
}
