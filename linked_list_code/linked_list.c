#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

struct ListNode {
    int val;
    struct ListNode *next;
};


struct ListNode* init_LL(int values[], int length) {
    // set starting point
    struct ListNode* head = NULL;
    head = malloc(sizeof(struct ListNode));

    // storing values inside linked list [1,2...5]
    struct ListNode* mut_head = head;
    for (int i = 0; i < length; i++) {
        // store the value
        mut_head->val = values[i];

        // if not last element
        if (i != length - 1) {
            // redefine next as the new space for next element
            mut_head->next = malloc(sizeof(struct ListNode));
        } else {
            // we set it as the end
            mut_head->next = NULL;
        }
        // shift pointer to
        mut_head = mut_head->next;
    }

    return head;
}

void print_LL(struct ListNode* head) {
    // starting point
    struct ListNode* current = head;

    // print opening bracket
    printf("[");

    // go through each element and print
    while (current != NULL) {
        printf("%i", current->val);

        if (current->next != NULL) {
          printf(", ");
        }
        // set current to next address before looping
        current = current->next;
    }
    printf("]\n");
}

void push_LL(struct ListNode* head, int val) {
    // set starting point
    struct ListNode* element = head;

    // go to the end
    while(element->next != NULL) {
        element = element->next;
    }

    // malloc enough for struct and members
    element->next = malloc(sizeof(struct ListNode));

    // set value
    element->next->val = val;

    // set end
    element->next->next = NULL;
}

int LL_length(struct ListNode* head) {
    struct ListNode* curr = head;
    int cnt = 0;
    while (curr != NULL) {
        cnt++;
        curr = curr->next;
    }
    return cnt;
}

void free_LL(struct ListNode* head) {
    struct ListNode* tmp;

    while (head != NULL) {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}