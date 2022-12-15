
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* prev = NULL, *next = NULL, *curr;
   for(curr = head; curr != 0;)
   {  
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
   }
    return (prev);

}
