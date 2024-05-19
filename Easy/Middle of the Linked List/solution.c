/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int find_length(struct ListNode* head){
    int len;
    for(len = 1; head ->next != NULL; len++){
        head = head ->next;
    }
    return(len);
}

struct ListNode* middleNode(struct ListNode* head) {
    int len;
    len = find_length(head);

    for(int i = 0; i < len / 2; i++){
        head = head -> next;
    }

    return(head);
}