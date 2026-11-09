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
    ListNode* reverseList(ListNode* head) { // this one is recursive solution
        if(head==NULL || head->next==NULL) return head;
        ListNode* newhead=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return newhead;
    }
    void reorderList(ListNode* head) {
        ListNode *slow=head, *fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* b= reverseList(slow->next);
        ListNode* a=head;
        slow->next=NULL;

        ListNode* c=new ListNode(100);
        ListNode* tc=c;
        ListNode* ta=a;
        ListNode* tb=b;
        while(ta && tb){
            tc->next=ta;
            ta=ta->next;
            tc=tc->next;
            tc->next=tb;
            tb=tb->next;
            tc=tc->next;
        }
        tc->next=ta;
        head=c->next;
    }
};