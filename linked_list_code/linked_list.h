#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct ListNode ListNode;

ListNode* init_LL(int values[], int length);
void push_LL(ListNode* head, int val);
void print_LL(ListNode* head);
int LL_length(ListNode* head);
void free_LL(ListNode* head);

#endif