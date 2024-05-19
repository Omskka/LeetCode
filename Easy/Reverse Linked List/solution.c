/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int FindListSize(struct ListNode* head){
    struct ListNode *traverse = head;
    int size = 0;
    while(traverse){
        traverse = traverse -> next;
        size++;
    }
    return(size);
}

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *buff = head;
    struct ListNode *temp = head;
    int arr[10000];
    int i = 0;


    for (; buff; i++)
    {
        arr[i] = buff->val;
        buff = buff->next;
    }

    arr[i] = '\0';

    while (temp)
    {
        temp->val = arr[i - 1];
        printf("%d\n",temp->val);
        temp = temp->next;
        i--;
    }
    return (head);
}