bool hasCycle(struct ListNode *head) {
    if (head == NULL || head->next == NULL) {
        return false;
    }

    struct ListNode *slow = head;
    struct ListNode *fast = head->next;

    while (fast != NULL && fast->next != NULL) {
        if (fast == slow) {
            return true; // Cycle detected
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    return false;
}
