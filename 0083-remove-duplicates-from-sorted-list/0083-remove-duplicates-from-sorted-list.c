/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* temp;
    struct ListNode* prev;
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    prev=head;
     temp=head->next;
    while(temp!=NULL)
    {
     if(prev->val==temp->val)
    {   prev->next=temp->next;
        free(temp);
        temp=prev->next;
        continue;
    }
    prev=temp;
    temp=temp->next;

    }

    
        return head;
}
    