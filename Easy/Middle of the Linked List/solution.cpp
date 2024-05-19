/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int find_length(ListNode* head){
        int len;
        for(len = 1; head->next != NULL; len++){
            head = head -> next;
        }
        return(len);
    }

    ListNode* middleNode(ListNode* head) {
       int len;
       len = find_length(head);
       for(int i = 0; i < len/2; i++){
        head = head -> next;
       } 
       return(head);
    } 
};