/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *current=head;
    struct ListNode *nextnode, *temp;
    while(current!=NULL){
        nextnode=current->next;
        if(nextnode!= NULL && current->val==nextnode->val){
            current->next=nextnode->next;
            free(nextnode);
        }
        else{
            current=current->next;
        }
    }
    return head;
}
