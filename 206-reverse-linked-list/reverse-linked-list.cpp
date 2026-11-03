class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* NEXT=NULL;
        while(curr){
            NEXT=curr->next;
            curr->next=prev;
            prev=curr;
            curr=NEXT;
        }
        return prev;
    }
};