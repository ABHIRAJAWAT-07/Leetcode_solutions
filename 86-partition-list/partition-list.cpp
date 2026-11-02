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
    ListNode* partition(ListNode* head, int x) {
        ListNode* lo=new ListNode(100);
        ListNode* hi=new ListNode(234);
        ListNode* tlo=lo;
        ListNode* thi=hi;
        ListNode* t=head;
        while(t!=NULL){
            if(t->val<x){
                tlo->next=t;
                t=t->next;
                tlo=tlo->next;
            }
            else{
                thi->next=t;
                t=t->next;
                thi=thi->next;

            }
            

        }
        tlo->next=hi->next;
        thi->next=NULL;
        return lo->next;
    }
};