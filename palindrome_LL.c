/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseCopy(struct ListNode *head) {
    struct ListNode *prev = NULL;
    struct ListNode *current = head;
    struct ListNode *nextnode;

    while (current != NULL) {
        nextnode = malloc(sizeof(struct ListNode));
        nextnode->val = current->val;
        nextnode->next = prev;
        prev = nextnode;
        current = current->next;
    }

    return prev;
}

bool isPalindrome(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return true;
    }

    struct ListNode *reversehead = reverseCopy(head);
    
    while (head != NULL) {
        if (head->val != reversehead->val) {
            return false;
        }
        head = head->next;
        reversehead = reversehead->next;
    }

    return true;
}
