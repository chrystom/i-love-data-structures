#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

// entrypoint
int main(int argc, char *argv[]) {
    // init ll
    int init_values[] = {1, 7, 7, 0, 1};
    ListNode* head = init_LL(init_values, 5);
    
    // print elements
    print_LL(head);

    // push new elements
    push_LL(head, 3);
    
    // print elements
    print_LL(head);

    // free LinkedList
    free_LL(head);
    return 0;
}