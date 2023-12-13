/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *temp;
    int count=0;
    int i;
    temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    temp=head;
    for(i=0;i<count/2;i++){
        temp=temp->next;
    }
    return temp;
}
