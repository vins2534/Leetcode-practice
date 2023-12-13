/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *temp, *prev, *nextNode;
    temp = prev = head;

    while (temp != NULL) {
        nextNode = temp->next;
        if (temp->val == val) {
            if (temp == head) {
                head = temp->next;
                free(temp);
                temp = nextNode;
                continue;
            } else {
                prev->next = temp->next;
                free(temp);
                temp = nextNode;
                continue;
            }
        }
        prev = temp;
        temp = nextNode;
    }

    return head;
}


