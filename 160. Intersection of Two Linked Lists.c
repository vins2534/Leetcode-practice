/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *tempA = headA;
    struct ListNode *tempB = headB;
    while (tempA != tempB) {
        tempA=(tempA!=NULL)? tempA->next:headB;
        tempB=(tempB!=NULL)? tempB->next:headA;
    }
    return tempA;
}
